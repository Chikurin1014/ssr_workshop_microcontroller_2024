#include <Arduino.h>

bool is_prime(int x) {
    // なにかを書く
    // sqrt(x) ... √xの値を返す
}

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600);
}

// 繰り返し実行される
void loop() {
    // 100までの素数を順番に表示
    for (int i = 1; i < 101; i++) {
        if (is_prime(i)) {
            Serial.println(i);
        }
        delay(1000);
    }
}
