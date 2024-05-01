#include <Arduino.h>

// 構造体VendingMachineを宣言
struct VendingMachine {
    /* ここを埋める */
};

void setup() {
    Serial.begin(9600);
}

// 繰り返し実行される
void loop() {
    // VendingMachine型の変数を宣言・初期化
    /* ここを埋める */
    Serial.printf("price: %d, stock: %d, money: %d\n" /* ここを埋める */);
    delay(1000);
}
