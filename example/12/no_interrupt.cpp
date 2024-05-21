#include <Arduino.h>
// 動作確認済み
// 割り込みをしない例

const int stopButton = 13;
const int ledPin = 2;

int delayTime = 3000;
int ledMode; //  1なら点滅、0なら消灯

void emergencyStop() {
    digitalWrite(ledPin, LOW);
    ledMode = 0; // 消灯モード
}

void setup() {
    ledMode = 1; // 点滅モード
    pinMode(stopButton, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);
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
    if (digitalRead(stopButton) == LOW) {
        emergencyStop();
    }
}
