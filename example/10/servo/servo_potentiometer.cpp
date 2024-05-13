#include <Arduino.h>
#include <ESP32Servo.h>

Servo servo1;
const int servo1Pin = 15;

const int minUs = 500;
const int maxUs = 2400;

const int potentioPin1 = 4;

int pos = 0;

void setup() {
    pinMode(potentioPin1, INPUT);
    servo1.setPeriodHertz(50);
    servo1.attach(servo1Pin, minUs, maxUs);
}

void loop() {
    int servoAngle1 = analogRead(potentioPin1) / 5.7; // servoAngle1の値を0~180に収まるように調整
    servo1.write(servoAngle1);
    delay(10);
}