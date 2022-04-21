
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
