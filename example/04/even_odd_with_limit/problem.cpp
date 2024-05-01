// 以下のプログラムを書き換えてcountに上限を課してください
// - 上限は10とすること
// - while文を使うこと
// - countが上限に達したらまた0から数えなおすこと

#include <Arduino.h>

int count;

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信を開始
    count = 0;          // countに0を代入
}

// 繰り返し実行される
void loop() {
    if (count % 2 == 0) {
        Serial.printf("%d is an even number\n", count);
    } else {
        Serial.printf("%d is an odd number\n", count);
    }
    count = count + 1; // countにcount + 1を代入
    delay(1000);       // 1000ミリ秒(=1秒)待つ
}
