#include <Arduino.h>

const int ledPin = 2; // const をつけると、値を変更できない変数になります。

void setup() {
    pinMode(ledPin, OUTPUT); // ledPinを出力ピンに設定
}

void loop() {
    digitalWrite(ledPin, HIGH); // ledPinの電圧をHIGH(3.3V)にする
    delay(1000);
    digitalWrite(ledPin, LOW); // ledPinの電圧をLOW(0.0V)にする
    delay(1000);
}
