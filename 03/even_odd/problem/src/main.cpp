#include <Arduino.h>

int count;

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600); // 通信を開始
    count = 0;          // countに0を代入
}

// 繰り返し実行される
void loop() {

    // ここを補ってください。
    // ヒント   ........ “%”は、左の整数を右の整数で割った余りを求める演算子です。
    //                 これを使ってcountが偶数か奇数かを判定すると良いでしょう。
    // “%”の用例 ...... 5 % 3 …… 2, 123 % 10 …… 3, etc.

    count = count + 1; // countにcount + 1を代入
    delay(1000);       // 1000ミリ秒(=1秒)待つ
}
