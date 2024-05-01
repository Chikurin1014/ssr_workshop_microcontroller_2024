#include <Arduino.h>

// 配列を宣言・初期化
/* ここを埋める */

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600);
}

// 繰り返し実行される
void loop() {
    Serial.printf("%s\n" /* ここも埋める */);          // %s: char配列の中身を文字列として出力
    Serial.printf("length : %d\n" /* ここも埋める */); // %d: 整数値を出力
    delay(1000);
}
