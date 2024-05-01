#include <Arduino.h>

// スラッシュを2つならべると、その右はコメントになる。
// コメントはあっても無くてもプログラムには影響しない。

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600);
}

// 繰り返し実行される
void loop() {
    Serial.println("Hello, World!");
    delay(1000);
}
