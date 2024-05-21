#include <Arduino.h>
// 動作確認済み
const int stopButton = 13;
const int ledPin = 2;

int delayTime = 500;
int ledMode; //  1なら点滅、0なら消灯

void emergencyStop() {
    digitalWrite(ledPin, LOW);
    ledMode = 0; // 消灯モード
}

void setup() {
    ledMode = 1; // 点滅モード
    pinMode(stopButton, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);
    attachInterrupt(stopButton, emergencyStop, FALLING); // ここでGPIO割り込み設定
}

void loop() {
    if (ledMode) { // 点滅モードならLチカする
        digitalWrite(ledPin, HIGH);
        delay(delayTime);
        digitalWrite(ledPin, LOW);
        delay(delayTime);
    }
    else { // 消灯モードなら何もしない
        digitalWrite(ledPin, LOW);
        delay(delayTime);
    }
}
