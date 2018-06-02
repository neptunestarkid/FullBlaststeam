
/*
 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe

 =======================================================
 References
 - Stepper motor - NEMA-17 size - 200 steps/rev, 12V 350mA
 https://www.adafruit.com/product/324
 https://cdn-shop.adafruit.com/product-files/324/C140-A+datasheet.jpg

 - L298N Dual Motor Controller Modules with Arduino
 http://www.instructables.com/id/Control-DC-and-stepper-motors-with-L298N-Dual-Moto/
 http://tronixstuff.com/2014/11/25/tutorial-l298n-dual-motor-controller-modules-and-arduino//
 https://tronixlabs.com.au/robotics/motor-controllers/l298n-dual-motor-controller-module-2a-australia/

 */

#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(10);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // step one revolution  in one direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  //delay(500);

  // step one revolution in the other direction:
//  Serial.println("counterclockwise");
//  myStepper.step(-stepsPerRevolution);
//  delay(500);
}

