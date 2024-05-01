#include <Arduino.h>

struct VendingMachine {
    int price;
    int stock;
    int money;
    void buy() {
        if (stock > 0) {
            money += price;
            stock--;
        }
    }
};

void setup() {
    Serial.begin(9600);
}

// 繰り返し実行される
void loop() {
    VendingMachine vm = {120, 5, 1000};
    Serial.printf("price: %d, stock: %d, money: %d\n", vm.price, vm.stock, vm.money);
    Serial.println("buy 1 ticket");
    vm.buy();
    delay(1000);
}
