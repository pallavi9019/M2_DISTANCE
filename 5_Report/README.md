
## Abstract
Ultrasonic Module HC-SR04 works on the principle of SONAR and RADAR system.
HC-SR-04 module has an ultrasonic transmitter, receiver, and control circuit on a single board.
The module has only 4 pins, Vcc, Gnd, Trig, and Echo.
When a pulse of 10µsec or more is given to the Trig pin, 8 pulses of 40 kHz are generated. After this, the Echo pin is made high by the control circuit in the module.
The echo pin remains high till it gets an echo signal of the transmitted pulses back.
The time for which the echo pin remains high, i.e. the width of the Echo pin gives the time taken for generated ultrasonic sound to travel towards the object and return.
Using this time and the speed of sound in air, we can find the distance of the object using a simple formula for distance using speed and time.
For more information about ultrasonic module HC-SR04 and how to use it, refer to the topic Ultrasonic Module HC-SR04 in the sensors and modules section.



# Requirements
## Introduction
This project uses an ultrasonic sensor to indicate the distance of any object from it. Here we have made a setup based on a microcontroller in which real time distance is sensed by an ultrasonic sensor and displays measured distance on an LCD display.

## Research
  DISTANCE FINDER...
  
The source code is to be compiled in VS CODE with AVR compiler. This DISTANCE FINDER in EMBEDDED C is not designed to run on the Turbo C versions. The source code for this mini project is around 1000 lines, so I didn’t want to display it here.
-------------------------------------------------------------------------------------------------

## Cost and Features
Our DISTANCEFINDER put learning. Your knowledge will be tested regarding a variety of objects. 


## Defining Our System
* ATmega32 microcontroller needs to transmit at least 10 us trigger pulse to the HC-SR04 Trig Pin.
After getting a trigger pulse, HC-SR04 automatically sends eight 40 kHz sound waves and the microcontroller waits for rising edge output at the Echo pin.
When the rising edge capture occurs at the Echo pin which is connected to an input of ATmega16, start Timer of ATmega16 and again wait for a falling edge on the Echo pin.
As soon as the falling edge is captured at the Echo pin, the microcontroller reads the count of the Timer. This time count is used to calculate the distance to an object

## SWOT ANALYSIS
![image](https://github.com/pallavi9019/M1_March_2022/blob/59e84a171d7bcf3bd502d74067d43659d4439241/1_Requirements/SWOT%20analysis/SWOT%20analysis%20(1).png)

# 4W&#39;s and 1&#39;H

## Who:

* All the mind people like students,children engineers for work,fun and projects.

## What:

* project, a number of objects are placed, and the user is will get the distance value from it.

## When:

* During the step-In training, this is the final project assessment and development started on 20th of march.

## Where:

* This can be used in all over the globe. any student/working professional of any age can use it.

## How:

* users can use this code to easy their work and project.

# Detail requirements
## High Level Requirements:

| ID | Description | Status (Implemented/Future)
|:---:|:---:|:---:|
|HLR-1| User shall be able to select the different inputs the user need to get values on LCD. |Implemented|
|HLR-2| System ask choice to continue. |Implemented|
|HLR-3| user shall be able to get parameter value after giving any other  value. |Implemented|
|HLR-4| user shall be able to get wrong correct answer. |Implemented|
|HLR-5| user shall be able to get the history of the Distancefinder. |Future|



##  Low level Requirements:

| ID | Description | Status (Implemented/Future)
|:---:|:---:|:---:|
|LLR-1| User shall be able to click the start button. |Implemented|
|LLR-2| User shall be able to create their account. |Future|
|LLR-3| User should be able to manage their data. |Future|

## REQUIRED COMPONENTS

ATmega32 Microcontroller
HC-SR04 Ultrasonic Distance Sensor
16×2 LCD Display
5V Power Supply
Hardware
Ultrasonic Distance Locator – Block Diagram
Circuit Diagram
Ultrasonic Distance Measurer – Circuit Diagram
Circuit Description
The overall circuit assembled on the breadboard contains three major components :ATmega 32 Microcontroller, Ultrasonic distance sensor and 16X2 Alphanumeric LCD display. The microcontroller is interfaced with 16X2 LCD and Ultrasonic sensor.

HC-SR04 Ultrasonic Sensor
The ultrasonic distance sensor has 4 Pins: Vcc, GND, Trigger and Echo. The Vcc and GND are used to power up the sensor and are connected to power and ground rails on breadboard. Trigger is connected to PIN 14 (RX/PD0) and Echo is connected to PIN 16 (INT0/PD2) of the microcontroller.

16X2 LCD Display
There are various ways to interface the LCD display to microcontroller based on the coding technique and the platform used.


 

The LCD has 16 pins.

Pin no 1 and 2 are GND and Vcc respectively, and are used to power up the LCD.

The Pin no 3 VEE, which can be used to adjust the contrast of LCD by varying the potentiometer. We shall connect it to ground in our setup.

Pin no 4, 5 and 6 are the control pins of LCD and they decide the working of LCD. We shall connect these pins to PORT D of microcontroller.

Pin 4 is RS (Register Select) and is connected to PIN 17 (PD3/INT1),
Pin 5 is RW (Read / Write) and is connected to PIN 18 (PD4) and
Pin 6 is E (Enable) which is connected to PIN 19 (PD5) of the microcontroller.
Pin 7 to 14 are D0-D7 which are the data lines. They are connected to PORT A of the microcontroller (PIN 40-13).

The pin 15 and 16 are for LCD back light and those pins will be connected to Vcc And Gnd.

## BLOCK DIAGRAM
![image](https://user-images.githubusercontent.com/86293096/164385451-c0f76634-d7a3-4768-b87c-1a345efc4985.png)

## CIRCUIT DIAGRAM

![image](https://github.com/pallavi9019/M2_DISTANCE/blob/2dfdeb701eaad32a45dac839476b1f4e143fdc7b/2_Design/Circuit%20diagram/distancefinder.png)

## Flow chart
![image](https://github.com/pallavi9019/M2_DISTANCE/blob/8aaf042ad6e73f78b54e49ea9dd71bce430a062e/2_Design/Flowchart/Figure-3-Obstacle-detection-and-avoidance-using-ultrasonic-sensor.png)

