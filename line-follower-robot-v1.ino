# Line Follower Robot Using Arduino

Welcome to the guide on creating a Line Follower Robot using Arduino! In this instructable, you'll learn how to build a robot that follows a line using infrared proximity sensors. The Arduino microcontroller will process sensor input and control the motors through a motor shield.

## Table of Contents
- [Introduction](#introduction)
- [The Working](#the-working)
- [Parts Required](#parts-required)
- [Assemble the Chassis](#assemble-the-chassis)
- [Main Connections](#main-connections)
- [Arduino Code](#arduino-code)

## Introduction
In this instructable, we'll explore how the robot reacts to different sensor outcomes:
- Case 1: No line detected - Both motors rotate forward, and the car moves forward.
- Case 2: Left sensor detects the line - Car turns left.
- Case 3: Right sensor detects the line - Car turns right.
- Case 4: Both sensors detect the line - Car stops.

## The Working
The robot uses two infrared proximity sensors placed at the front. Based on sensor input, the Arduino directs the motors using a motor shield, determining the robot's movement.

## Parts Required
Gather the following components:
- Chassis (including motors and wheels)
- Arduino Uno R3
- L293D Motor Shield
- IR Proximity Sensors (pair)
- Jumper Wires
- Switch
- 4AA Battery Holder

**Tools required:**
- Soldering Iron
- Hot Glue Gun
- Screw Driver

## Assemble the Chassis
1. Assemble your robot body according to your chassis. Refer to the instruction manual if provided.
2. Attach Arduino, the motor shield, and the battery holder to the chassis.
3. Attach proximity sensors at the front on either side, facing down, at the corners.
4. Attach the switch.

**Note:** Solder wires to the motors and the switch.

## Main Connections
Connect the components as follows:
- Left Sensor to Arduino: Vcc - 5v, Gnd - Gnd, Out - A4
- Right Sensor to Arduino: Vcc - 5v, Gnd - Gnd, Out - A5
- Connect the motors to the motor shield and plug the motor shield onto the Arduino board.
- Connect the battery holder to the shield through a switch.

## Arduino Code
Download the provided Arduino code file or write your own to program the robot.
