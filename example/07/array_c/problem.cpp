#include <Arduino.h>

// 配列を宣言・初期化
/* ここを埋める */

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600);
}

// 繰り返し実行される
void loop() {
    for (/* 前回を参考に*/; /* ここも */; /* 埋める */) {
        Serial.println(/* ここも埋める */);
        delay(1000);
    }
}
