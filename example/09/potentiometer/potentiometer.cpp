#include <Arduino.h>
#define ledPin 2
#define potentioPin 4
#define pwmch 0

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(potentioPin, INPUT);
    ledcSetup(pwmch, 12800, 8);
    ledcAttachPin(ledPin, pwmch);
}

void loop() {
    int val = analogRead(potentioPin);
    ledcWrite(pwmch, val / 16);
}
