#include <Stepper.h>

#define STEPS 480      // 使用するモータのステップ数

// ピン番号を指定して、stepperクラスのインスタンスを生成
Stepper stepper(STEPS, 1,3,2, 4);


void setup() {
  stepper.setSpeed(30);          // スピードを30RPMに
  stepper.step(100);
}

void loop() {

}
