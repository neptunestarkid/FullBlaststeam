//https://www.arduino.cc/en/Tutorial/InputPullupSerial
//Connect the button wire to Arduino Pin 2 and GRD


int pushButton = 2;

// the setup routine runs once when you press reset:

void setup() {

// initialize serial communication at 9600 bits per second:

Serial.begin(9600);

// make the pushbutton's pin an input:

pinMode(pushButton, INPUT_PULLUP);

}

// the loop routine runs over and over again forever
  
void loop() {

// read the input pin:

int buttonState = digitalRead(pushButton);

Serial.println("hello");

// print out the state of the button:

Serial.println(buttonState); // 1 is on (pushed), 0 is off

delay(500);

// delay in between reads for stability (1000 = 1 second).

}
