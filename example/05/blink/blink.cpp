#include <Arduino.h>

const int ledPin = 2;// const をつけると、値を変更できない変数になります。

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
}
