import serial
import time
import cube_solver
5
# from rubik_solver import utils
# cube = 'wowgybwyogygybyoggrowbrgywrborwggybrbwororbwborgowryby'
# print(utils.solve(cube, 'Kociemba'))

arduino = serial.Serial(port='COM6', baudrate=115200, timeout=.5)

scamble = "R U R' U R U2 R' U"




def write_read(x):
    arduino.write(bytes(x, 'utf-8'))
    # data = arduino.readall()
    # return data

# B2 U2 L' B' R2 U2 D2 B L2 R' U2 F B' R' D' R B' F' U' B2
while True:
    user_input = input("Enter a move: ")  # Taking input from user
    moves = cube_solver.turn_faces(user_input)
    print(moves)
    for move in moves:
        print(move)
        write_read(move)
        time.sleep(0.3)
