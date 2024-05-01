#pragma once

#include <Arduino.h>

struct DigitalOut {
    int pinNum;
    int state;

    void setup() {
        pinMode(pinNum, OUTPUT);
        setLow();
    }
    void setHigh() {
        state = 1;
        digitalWrite(pinNum, HIGH);
    }
    void setLow() {
        state = 0;
        digitalWrite(pinNum, LOW);
    }
    void toggle() {
        if (state == 0) {
            setHigh();
        }
        else {
            setLow();
        }
    }
};
