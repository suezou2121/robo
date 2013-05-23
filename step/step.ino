#include <Stepper.h>

#define STEPS 480      // 使用するモータのステップ数

// ピン番号を指定して、stepperクラスのインスタンスを生成
Stepper stepperL(STEPS, 1,3,2, 4);
Stepper stepperR(STEPS, 8,10,9,11);

void setup() {
  stepperL.setSpeed(10);          // スピード(RPM)
  stepperR.setSpeed(10);          // スピード(RPM)
  
}

void loop() {
  stepperL.step(100);
  stepperR.step(100);
}
