#include "utils.h"
/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);            // wait for a second
  digitalWrite(2, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);            // wait for a second
  Utils::hello_world();
}
