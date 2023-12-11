// Fully working. The code can turn any one motor and does it fairly silently. 04/11/23

#include <Arduino.h>
#include "A4988.h"

// Define the number of stepper motors
const int numMotors = 6;

// Define pin arrays for direction and step pins
int DirPins[numMotors] = { 23, 25, 27, 29, 31, 33 };
int StepPins[numMotors] = { 22, 24, 26, 28, 30, 32 };
int SleepPins[numMotors] = { 41, 43, 45, 47, 49, 51 };

int MS1 = 35;    //GPIO13---D7 of Nodemcu--MS1 for A4988
int MS2 = 37;    //GPIO16---D0 of Nodemcu--MS2 for A4988
int MS3 = 39;    //GPIO15---D8 of Nodemcu--MS3 for A4988
int rpm = 300;
int microsteps = 8;
int commandData[3];

// Define an array of A4988 stepper motor objects
//A4988 stepper(200, 35, 45, MS1, MS2, MS3);
A4988 steppers[numMotors] = {
  A4988(200, DirPins[0], StepPins[0], 0,0,0),
  A4988(200, DirPins[1], StepPins[1], MS1, MS2, MS3),
  A4988(200, DirPins[2], StepPins[2], MS1, MS2, MS3),
  A4988(200, DirPins[3], StepPins[3], MS1, MS2, MS3),
  A4988(200, DirPins[4], StepPins[4], MS1, MS2, MS3),
  A4988(200, DirPins[5], StepPins[5], MS1, MS2, MS3)
};

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World!");

  for (int i = 0; i < numMotors; i++) {
    pinMode(DirPins[i], OUTPUT);
    pinMode(StepPins[i], OUTPUT);
    pinMode(SleepPins[i], OUTPUT);
    digitalWrite(SleepPins[i], HIGH);
  }
}

int localMotor = 0;
int localDegrees = 0;
int localSpeed = 0;

void loop() {
  if (Serial.available() > 0) {
    String inputString = Serial.readStringUntil('\n');
    getDataFromRotationCommand(inputString);
    Serial.println(commandData[0]);
    Serial.println(commandData[1]);
    Serial.println(commandData[2]);
  }
}

void rotateMotor(int motor, int degrees, int speed) {
  steppers[motor].begin(speed, microsteps);
  steppers[motor].enable();

  steppers[motor].rotate(degrees);
  steppers[motor].disable();
}

void getDataFromRotationCommand(String inputString) {
  String token;
  int tokenIndex = 0;
  int spaceIndex = inputString.indexOf(' ');
  if (inputString.substring(0, spaceIndex) != "rotate") {
    return;
  }
  while (inputString.length() > 0) {

    spaceIndex = inputString.indexOf(' ');
    token = inputString.substring(0, spaceIndex);
    inputString = inputString.substring(spaceIndex + 1);
    commandData[tokenIndex - 1] = token.toInt();


    switch (tokenIndex) {
      case 1:
        localMotor = token.toInt();
        commandData[0] = token.toInt();
        break;
      case 2:
        localDegrees = token.toInt();
        commandData[1] = token.toInt();
        break;
      case 3:
        localSpeed = token.toInt();
        commandData[2] = token.toInt();
        break;
      default:
        break;
    }
    if (!(spaceIndex > 0)) {
      inputString = "";
    }
    tokenIndex++;
  }
  Serial.print("Motor: ");
  Serial.println(localMotor);
  Serial.print("Degrees: ");
  Serial.println(localDegrees);
  Serial.print("Speed: ");
  Serial.println(localSpeed);
  digitalWrite(SleepPins[localMotor], LOW);
  delay(1);
  Serial.println(steppers[localMotor].getDirection());
  steppers[localMotor].begin(localSpeed, microsteps);
  steppers[localMotor].rotate(localDegrees);
  digitalWrite(SleepPins[localMotor], HIGH);
}