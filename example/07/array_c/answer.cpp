#include <Arduino.h>

// 配列arrayを宣言・初期化
int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// 最初に一回だけ実行される
void setup() {
    Serial.begin(9600);
}

// 繰り返し実行される
void loop() {
    for (int i = 0; i < 10; i++) {
        Serial.println(array[i]);
        delay(1000);
    }
}
