#pragma once

#include <Arduino.h>

struct PwmOut {
    int pinNum;
    int chNum;
    int periodUs;
    int dutyInt;

    void setup() {
        pinMode(pinNum, OUTPUT);
        ledcSetup(chNum, 1000000 / periodUs, 8);
        ledcAttachPin(pinNum, chNum);
        setToZero();
    }
    float getDuty() {
        return dutyInt / 255.0;
    }
    void setDuty(float duty) {
        dutyInt = duty * 255.0;
        // dutyIntが0~255の外にあった場合、0か255にする
        if (dutyInt < 0) {
            dutyInt = 0;
        }
        else if (dutyInt > 255) {
            dutyInt = 255;
        }
        ledcWrite(chNum, dutyInt);
    }
    void setToZero() {
        dutyInt = 0;
        ledcWrite(chNum, 0);
    }
};
