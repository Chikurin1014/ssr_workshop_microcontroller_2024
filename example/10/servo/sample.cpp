#include <Arduino.h>
#include <ESP32Servo.h>

Servo servo;      // サーボオブジェクトの定義
int servoPin = 2; // サーボの制御ピンの制御用のピン(明るいほうのオレンジ(黄色?))
int minUs = 500;  // 最小のパルス幅
int maxUs = 2400; // 最大のパルス幅

void setup() {
    servo.setPeriodHertz(50);             // 50HzのPWMを出すという設定
    servo.attach(servoPin, minUs, maxUs); // servoオブジェクトに定数を設定していく。
}

void loop() {
    // put your main code here, to run repeatedly:
    servo.write(30);  // サーボの角度を30度にする
    delay(1000);      // 1000ミリ秒(1秒)待つ
    servo.write(150); // サーボの角度を150度にする
    delay(1000);      // 1000ミリ秒(1秒)待つ
}
