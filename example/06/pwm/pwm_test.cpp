#include <Arduino.h>

const int ledPin = 2;
const int pwmch = 0; // pwmでつかうチャンネルを設定

void setup() {
    pinMode(ledPin, OUTPUT);
    ledcSetup(pwmch, 12800, 8);   // pwmのチャンネルの設定(チャンネル番号、周波数、分解能(8なら2^8 = 256段階))
    ledcAttachPin(ledPin, pwmch); // ピンにpwmを割り当て
}

void loop() {
    ledcWrite(pwmch, 50); // pwmのチャンネルのデューティー比を50/255に設定
    delay(1000);
    ledcWrite(pwmch, 250); // pwmのチャンネルのデューティー比を250/255に設定
    delay(1000);
}