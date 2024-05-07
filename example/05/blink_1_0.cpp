#include <arduino.h>

const int ledPin = 2;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    digitalWrite(ledPin, 1); //          HIGH →　1
    delay(1000);
    digitalWrite(ledPin, 0); //          LOW →　0
    delay(1000);
}
