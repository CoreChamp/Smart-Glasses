#include "Ultrasonic.h"

int LED1 = 0;  // LED1 Pin
int TRIG = 2; // Trigger Pin
int ECHO = 3; // Echo Pin
int Range; // The range of the object from the HC-SR04 Ultarsonic Module
int Dist; // The Distance value

Ultrasonic ultrasonic(TRIG,ECHO); // Create and initialize the Ultrasonic object.

void setup() {
  pinMode(LED1, OUTPUT);
  Dist = 10;
}

void loop() {
  //Range = ultrasonic.Ranging(CM); // Range is calculated in Centimeters. 
  Range = ultrasonic.read(); // Range is calculated in Inches.
 
  if (Range < Dist) { 
    digitalWrite(LED1, HIGH);
  } else if (Range > Dist) { 
    digitalWrite(LED1, LOW);
  }
  }
  
