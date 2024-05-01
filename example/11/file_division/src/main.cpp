#include <Arduino.h>

#include "DigitalOut.hpp"
#include "PwmOut.hpp"

DigitalOut led1 = {2, 0};
PwmOut led2 = {2, 0, 20000, 0};

void setup() {
    led1.setup();
    led2.setup();
}

void loop() {
    float duty = led2.getDuty();
    led1.toggle();
    led2.setDuty(duty + 0.2);
    delay(1000);
}
