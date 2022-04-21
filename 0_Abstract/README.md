#ABSTRACT
Ultrasonic Module HC-SR04 works on the principle of SONAR and RADAR system.
HC-SR-04 module has an ultrasonic transmitter, receiver, and control circuit on a single board.
The module has only 4 pins, Vcc, Gnd, Trig, and Echo.
When a pulse of 10µsec or more is given to the Trig pin, 8 pulses of 40 kHz are generated. After this, the Echo pin is made high by the control circuit in the module.
The echo pin remains high till it gets an echo signal of the transmitted pulses back.
The time for which the echo pin remains high, i.e. the width of the Echo pin gives the time taken for generated ultrasonic sound to travel towards the object and return.
Using this time and the speed of sound in air, we can find the distance of the object using a simple formula for distance using speed and time.
For more information about ultrasonic module HC-SR04 and how to use it, refer to the topic Ultrasonic Module HC-SR04 in the sensors and modules section.
