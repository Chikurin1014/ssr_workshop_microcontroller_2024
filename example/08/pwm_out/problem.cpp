#include <Arduino.h>

struct PwmOut {
    int pinNum;
    int chNum;
    int periodUs;
    int dutyInt;

    void setup() {
        /* 最初に一回だけ行う処理 */
        /* ここを埋める */
    }
    float getDuty() {
        /* 現在のピン出力(duty比, 0.0~1.0)を返す */
        /* ここを埋める */
    }
    void setDuty(float duty) {
        /* ピン出力(duty比, 0.0~1.0)をdutyにする */
        /* ここを埋める */
    }
    void setToZero() {
        /* ピン出力(duty比, 0.0~1.0)を0にする */
        /* ここを埋める */
    }
};

PwmOut led = {2, 0, 20000, 0};

void setup() {
    led.setup();
}

void loop() {
    float duty = led.getDuty();
    led.setDuty(duty + 0.2);
    delay(1000);
}
