#include <Arduino.h>

// スラッシュを2つならべると、その右はコメントになる。
// コメントはあっても無くてもプログラムには影響しない。

int count; // [型名] [変数名] の形式で変数を定義する

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信を開始
    count = 0;          // countに0を代入する
}

// 繰り返し実行される
void loop() {
    Serial.printf("number: %d\n", count); // %d には後ろの引数(count)の中身が入る
    count = count + 1;                    // countにcount + 1を代入する
    delay(1000);                          // 1000ミリ秒(=1秒)待つ
}
