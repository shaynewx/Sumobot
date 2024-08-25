# Sumobot

This Arduino project provides basic control for a robot with two motors, allowing it to move in different directions (forward, back, left, and right) and stop. It also includes functionality to detect boundaries using an IR sensor.

## Features

- **Directional Movement**: Control the robot to move forward, backward, left, or right.
- **Speed Control**: Adjust the speed of each motor independently.
- **Boundary Detection**: Utilizes an IR sensor to detect obstacles and stop the robot to prevent collisions.
- **Standby State**: A function is provided to maintain the robot in standby mode.

## Hardware Setup

- **Motor A**:
    - `enA` (Enable A): Pin 9
    - `in1`: Pin 8
    - `in2`: Pin 7
- **Motor B**:
    - `enB` (Enable B): Pin 3
    - `in3`: Pin 5
    - `in4`: Pin 4
- **Ultrasonic Sensor**:
    - `trigPin`: Pin 10
    - `echoPin`: Pin 13
- **IR Sensor**:
    - `IRout`: Pin 12

## Installation

1. Connect the hardware as per the pins defined in the code.
2. Upload the provided Arduino script to your board using the Arduino IDE or any compatible uploader.
3. Power the Arduino board and observe the robot's response to environmental inputs like obstacles.

## Functions

- `setup()`: Initializes all pins and serial communications.
- `move(int motorA_speed, int motorB_speed, int direction)`: Controls the motors based on the specified direction and speed.
- `stop_bot()`: Stops both motors.
- `set_speed(int motor_left, int motor_right)`: Sets the speed of both motors.
- `change_direction(int base_speed, int base_speed2, int direction)`: Wrapper function to simplify directional changes with speed adjustments.
- `detect_boundary()`: Checks the IR sensor and stops the robot if an obstacle is detected.
- `state_stand_by()`: Placeholder for implementing standby functionality.

## Usage

After setting up the hardware and uploading the code, the robot can be powered on. The loop function will automatically command the robot to follow a predetermined path, which can be customized by modifying the `loop()` function in the script.

For further customization, additional sensors and functionalities can be integrated by expanding the existing codebase.

## Contribution
Feel free to fork this project and make your own changes. Pull requests are welcome for bug fixes, improvements, and adding new features.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Authors
- **[Weixian Qian](https://github.com/Janus117)**
