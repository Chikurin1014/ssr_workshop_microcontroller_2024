#include <Arduino.h>

const int ledPin = 2;
const int switchPin = 13;

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(switchPin, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(switchPin) == LOW) {
        digitalWrite(ledPin, HIGH);
    }
    else {
        digitalWrite(ledPin, LOW);
    }
}
