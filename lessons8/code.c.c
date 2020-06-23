/*
  Keyboard

  Plays a pitch that changes based on a changing
  input circuit:
  * 3 pushbuttons from +5V to analog in 0 through
  3
  * 3 10K resistors from analog in 0 through 3 to
  ground
  * 8-ohm speaker on digital pin 8
*/

int pos = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
}

void loop()
{
  // 如果检测到A0上的按钮按下
  if (digitalRead(A0) == HIGH) {
    tone(8, 440, 100); // 播放音调57（A4=440赫兹）
  }
  // 如果检测到A1上的按钮按下
  if (digitalRead(A1) == HIGH) {
    tone(8, 494, 100); // 播放音调59（B4=494赫兹
  }
  // 如果检测到A0上的按钮按下
  if (digitalRead(A2) == HIGH) {
    tone(8, 523, 100); // 播放音调60（C5=523赫兹）
  }
  delay(10); // 稍微延迟以提高仿真性能
}
