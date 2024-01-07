speed = 100  # Speed for the motor to rotate in rpm

cube_mapping = {
    "F": 0,
    "L": 1,
    "B": 2,
    "R": 3,
    "U": 4,
}

move_d_prime = "R2 L2 U F2 B2 U F2 R2 F2 B2 U2 L2 U2 L2 R2 U2 R2 U2 R2 F2 U' R2 B2 R2 L2 F2 L2 U B2 F2 U"


def turn_faces(moves):
    # Split the moves into a list
    moves = moves.split(" ")
    # Create a list of commands
    commands = []
    for move in moves:
        print(move)
        if "D'" in move:
            for command in turn_faces(move_d_prime):
                commands.append(command)
            continue
        elif "D2" in move:
            for command in turn_faces(move_d_prime + " " + move_d_prime):
                commands.append(command)
            continue
        elif "D" in move:
            tempmove = move_d_prime[::-1].split(" ")
            tempmove = " ".join(tempmove)
            for command in turn_faces(tempmove):
                commands.append(command)
            continue

        commands.append(turn_face(move))
    return commands


def turn_face(move):
    # If move contains 2, remove it and add 180 to the rotation
    rotation = 90
    if "2" in move:
        rotation = 180
    elif "'" in move:
        rotation = -90

    # Remove the 2 or ' from the move
    face = move.replace("2", "").replace("'", "")
    motor_num = cube_mapping[face]

    return f"rotate {motor_num} {rotation} {speed}"
