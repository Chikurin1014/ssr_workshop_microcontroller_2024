#include <Arduino.h>

// 構造体VendingMachineを宣言

struct VendingMachine {
    int price;
    int stock;
    int money;
};

void setup() {
    Serial.begin(9600);
}

// 繰り返し実行される
void loop() {
    // VendingMachine型の変数を宣言・初期化
    VendingMachine vm = {120, 5, 1000};
    Serial.printf("price: %d, stock: %d, money: %d\n", vm.price, vm.stock, vm.money);
    delay(1000);
}
