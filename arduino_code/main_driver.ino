// Fully working. The code can turn any one motor and does it fairly silently. 04/11/23

#include <Arduino.h>
#include "A4988.h"
#include <SoftwareSerial.h>

SoftwareSerial mySerial(12, 13);  // RX, TX

// Define the number of stepper motors
const int numMotors = 6;

// Define pin arrays for direction and step pins
int DirPins[numMotors] = { 23, 25, 27, 29, 31, 33 };
int StepPins[numMotors] = { 22, 24, 26, 28, 30, 32 };
int SleepPins[numMotors] = { 41, 43, 45, 47, 49, 51 };

int MS1 = 35;  //GPIO13---D7 of Nodemcu--MS1 for A4988
int MS2 = 37;  //GPIO16---D0 of Nodemcu--MS2 for A4988
int MS3 = 39;  //GPIO15---D8 of Nodemcu--MS3 for A4988
int rpm = 300;
int microsteps = 8;
int commandData[3];


const int rotationSpeed = 200;  // 200 rpm


// Define an array of A4988 stepper motor objects
//A4988 stepper(200, 35, 45, MS1, MS2, MS3);
A4988 steppers[numMotors] = {
  A4988(48, DirPins[0], StepPins[0], MS1, MS2, MS3),
  A4988(200, DirPins[1], StepPins[1], MS1, MS2, MS3),
  A4988(200, DirPins[2], StepPins[2], MS1, MS2, MS3),
  A4988(200, DirPins[3], StepPins[3], MS1, MS2, MS3),
  A4988(200, DirPins[4], StepPins[4], MS1, MS2, MS3),
  A4988(200, DirPins[5], StepPins[5], MS1, MS2, MS3)
};

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World!");
  mySerial.begin(9600);
  mySerial.println("Hello, world?");

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

  if (mySerial.available() > 0) {
    String inputString = mySerial.readStringUntil('\n');
    Serial.println(inputString);
    rotateCubeFromMoveSet(inputString);
  }

  if (Serial.available() > 0) {
    String inputString = Serial.readStringUntil('\n');
    getDataFromRotationCommand(inputString);
    Serial.println(commandData[0]);
    Serial.println(commandData[1]);
    Serial.println(commandData[2]);
  }
}

void rotateMotor(int motor, int degrees, int speed) {
  Serial.println("Motor: " + String(motor) + " Degrees: " + String(degrees) + " Speed: " + String(speed));

  digitalWrite(SleepPins[motor], LOW);
  delay(1);
  steppers[motor].begin(speed, microsteps);
  steppers[motor].rotate(degrees);
  digitalWrite(SleepPins[motor], HIGH);
  //delay(50);
}

void rotateCubeFromMoveSet(String moveSet) {
  int _rotationDegrees = 90;
  int _rotationSpeed = rotationSpeed;
  int _rotationMotor = 0;

  // Iterate over each character in the move set
  for (int i = 0; i < moveSet.length(); i++) {
    if (moveSet[i] == ' ') {
      Serial.println("rotate " + String(_rotationMotor) + " " + String(_rotationDegrees) + " " + String(_rotationSpeed));
      rotateMotor(_rotationMotor, _rotationDegrees, _rotationSpeed);
      _rotationDegrees = 90;
      _rotationSpeed = rotationSpeed;
      _rotationMotor = 0;
    } else if (moveSet[i] == '\'') {
      Serial.println("1: " + String(moveSet[i]));
      _rotationDegrees = -90;
    } else if (moveSet[i] == '2') {
      Serial.println("2: " + String(moveSet[i]));
      _rotationDegrees = 180;
    } else {
      Serial.println("5: " + String(moveSet[i]));
      _rotationMotor = getValueForKey(moveSet[i]);
    }
  }
}

int getValueForKey(char key) {
  if (key == 'D') {
    return 0;
  } else if (key == 'U') {
    return 1;
  } else if (key == 'F') {
    return 2;
  } else if (key == 'L') {
    return 3;
  } else if (key == 'B') {
    return 4;
  } else if (key == 'R') {
    return 5;
  } else {
    return 0;
  }
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
  delay(2);
  Serial.println(steppers[localMotor].getDirection());

  steppers[localMotor].begin(localSpeed, microsteps);
  steppers[localMotor].rotate(localDegrees);
  digitalWrite(SleepPins[localMotor], HIGH);
}