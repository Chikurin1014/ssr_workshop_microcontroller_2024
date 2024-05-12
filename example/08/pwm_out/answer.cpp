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
        pinMode(pinNum, OUTPUT);
        ledcSetup(chNum, 1000000 / periodUs, 8);
        ledcAttachPin(pinNum, chNum);
        setToZero();
    }
    // 現在のピン出力(duty比, 0.0~1.0)を返す関数
    float getDuty() {
        return dutyInt / 255.0;
    }
    // ピン出力(duty比, 0.0~1.0)をdutyにする関数
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
    // ピン出力(duty比, 0.0~1.0)を0にする関数
    void setToZero() {
        dutyInt = 0;
        ledcWrite(chNum, 0);
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
