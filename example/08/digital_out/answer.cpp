#include <Arduino.h>

struct DigitalOut {
    // メンバ変数
    int pinNum;
    int state;

    // メンバ関数
    // 最初に一回だけ行う処理をまとめた関数
    void setup() {
        pinMode(pinNum, OUTPUT);
        setLow();
    }
    // ピン出力をHIGHにする関数
    void setHigh() {
        state = 1;
        digitalWrite(pinNum, HIGH);
    }
    // ピン出力をLOWにする関数
    void setLow() {
        state = 0;
        digitalWrite(pinNum, LOW);
    }
    // ピン出力(HIGH/LOW)を切り替える関数
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
