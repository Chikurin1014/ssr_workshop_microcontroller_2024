#include <Arduino.h>

bool isPrime(int x) {
    if (x == 2) {
        return true;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600);
}

// 繰り返し実行される
void loop() {
    // 100までの素数を順番に表示
    for (int i = 1; i < 101; i++) {
        if (isPrime(i)) {
            Serial.println(i);
        }
        delay(1000);
    }
}
