#include <Arduino.h>

// 配列を宣言・初期化
std::array<char, 20> str = {"Hello, world !"};

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600);
}

// 繰り返し実行される
void loop() {
    Serial.printf("%s\n", str.data());          // %s: char配列の中身を文字列として出力
    Serial.printf("length : %d\n", str.size()); // %d: 整数値を出力
    delay(1000);
}
