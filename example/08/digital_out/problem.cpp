#include <Arduino.h>

struct DigitalOut {
    int pinNum;
    int state;

    void setup() {
        /* 最初に一回だけ行う処理 */
        /* ここを埋める */
    }
    void setHigh() {
        /* ピン出力をHIGHにする */
        /* ここを埋める */
    }
    void setLow() {
        /* ピン出力をLOWにする */
        /* ここを埋める */
    }
    void toggle() {
        /* ピン出力のHIGH/LOWを切り替える */
        /* ここを埋める */
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
