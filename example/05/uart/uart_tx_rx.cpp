#include <Arduino.h>

void setup() {
    Serial.begin(9600); // シリアル通信を開始
}

void loop() {
    if (Serial.available() > 0) {  // 受け取ったデータがあれば
        char data = Serial.read(); // データを読み込んで、dataに代入。
        Serial.write(&data, 1);    // dataをシリアルモニタに表示
    }
}
