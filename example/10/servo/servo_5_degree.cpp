#include <Arduino.h>
#include <ESP32Servo.h>

Servo servo1;
const int servo1Pin = 2;

const int minUs = 500;
const int maxUs = 2400;

const int potentioPin1 = 12;

int pos = 0;

void setup() {
    pinMode(potentioPin1, INPUT);
    servo1.setPeriodHertz(50);
    servo1.attach(servo1Pin, minUs, maxUs);
}

void loop() {
    for (pos = 0; pos < 150; pos += 5) {
        servo1.write(pos);
        delay(2);
    }
    for (pos = 150; pos > 0; pos -= 5) {
        servo1.write(pos);
        delay(2);
    }
}