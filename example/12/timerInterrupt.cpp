#include <Arduino.h>

hw_timer_t* timer = NULL;
double omega;
double pre_theta;

double getSensVal() {
    // 角度を計測する処理
}

void IRAM_ATTR calc_omega() { // タイマー割り込みで実行される関数
    double theta = getSensVal();
    omega = (theta - pre_theta) / 0.001;
}
void setup() {
    timer = timerBegin(0, 80, true);
    timerAttachInterrupt(timer, &calc_omega, true);
    timerAlarmWrite(timer, 1000, true);
    timerAlarmEnable(timer);
}
void loop() {
}
