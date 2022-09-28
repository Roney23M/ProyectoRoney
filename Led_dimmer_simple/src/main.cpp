#include <Arduino.h>

#define led1 6
#define pot 1
int brillo;

void setup() {
  pinMode(led1, OUTPUT);
  analogWrite(led1, LOW);
  Serial.begin(9600);
}

void loop() {
  brillo = analogRead(pot) / 4;
  Serial.println(brillo);
  analogWrite(led1, brillo);
  delay(10);
}