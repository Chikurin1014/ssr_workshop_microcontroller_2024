#include <Arduino.h>

#define inputPin 4

void setup() {
    pinMode(inputPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    int val = analogRead(inputPin);
    Serial.print("input = ");
    Serial.println(val);
    delay(1000);
}
