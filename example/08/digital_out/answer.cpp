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

DigitalOut led = {2, 0};

// 最初に一回だけ実行される
void setup() {
    led.setup();
}

// 繰り返し実行される
void loop() {
    led.toggle();
    delay(1000);
}
