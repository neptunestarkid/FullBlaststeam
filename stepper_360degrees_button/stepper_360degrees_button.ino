
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

 - Button
 http://www.arduino.cc/en/Tutorial/Button

 */

#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  // initialize the serial port:
  Serial.begin(9600);

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed and provide conditions:
  if (buttonState == HIGH) {
  digitalWrite(ledPin, LOW);
  } else {
  digitalWrite(ledPin, HIGH);
  }


  
  // step one revolution  in one direction:
//  Serial.println("clockwise");
//  myStepper.step(stepsPerRevolution);
//  delay(500);

  // step one revolution in the other direction:
//  Serial.println("counterclockwise");
//  myStepper.step(-stepsPerRevolution);
//  delay(500);
}

