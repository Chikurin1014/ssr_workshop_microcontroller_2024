#include <Arduino.h>

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600);
}

// 繰り返し実行される
void loop() {
    for (int i = 1; i < 101; i++) { // for文
        if (i % 15 == 0) {
            Serial.println("FizzBuzz");
        } else if (i % 5 == 0) {
            Serial.println("Buzz");
        } else if (i % 3 == 0) {
            Serial.println("Fizz");
        } else {
            Serial.println(i);
        }
        delay(1000); // 1000ミリ秒(=1秒)待つ
    }
}
