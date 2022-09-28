#include <Arduino.h>
#include <Servo.h>

Servo servo1;

const int pinServo = 2;
const int pulsoMin = 550;  // min 450
const int pulsoMax = 2450; // max 2450
#define pot 1
int valorPot;
int angulo;

void setup() { servo1.attach(pinServo, pulsoMin, pulsoMax); }

void loop() {
  valorPot = analogRead(pot);
  angulo =
      map(valorPot, 0, 1023, 0, 180); // map realiza la conversion de un valor
                                      // de x rango a otros valores de z rango
  servo1.write(angulo);
  delay(50);
}