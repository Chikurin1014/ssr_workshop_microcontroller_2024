#include <Arduino.h>

struct PwmOut {
    // メンバ変数
    int pinNum;
    int chNum;
    int periodUs;
    int dutyInt;

    // メンバ関数
    // 最初に一回だけ行う処理をまとめた関数
    void setup() {
        /* ここを埋める */
    }
    // 現在のピン出力(duty比, 0.0~1.0)を返す関数
    float getDuty() {
        /* ここを埋める */
    }
    // ピン出力(duty比, 0.0~1.0)をdutyにする関数
    void setDuty(float duty) {
        /* ここを埋める */
    }
    // ピン出力(duty比, 0.0~1.0)を0にする関数
    void setToZero() {
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
