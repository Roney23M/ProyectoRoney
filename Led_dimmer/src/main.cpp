#include <Wire.h> 
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd (0x27,2,1,0,4,5,6,7);

const int led = 11;
int pot = 0;
int valor;

void setup() {
  pinMode(led, OUTPUT);
  lcd.setBacklightPin(3, POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.begin(16,2);
  lcd.clear();
}

void loop() {
  valor = analogRead(pot)/4; 
  digitalWrite(led, valor);

  lcd.setCursor(0,0);
  lcd.print("Brillo del led:");
  lcd.setCursor(0,1);
  lcd.print(valor*100/255);
  lcd.print("%");
  lcd.print("    ");
  delay(10);
}