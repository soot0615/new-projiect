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
  // �����⵽A0�ϵİ�ť����
  if (digitalRead(A0) == HIGH) {
    tone(8, 440, 100); // ��������57��A4=440���ȣ�
  }
  // �����⵽A1�ϵİ�ť����
  if (digitalRead(A1) == HIGH) {
    tone(8, 494, 100); // ��������59��B4=494����
  }
  // �����⵽A0�ϵİ�ť����
  if (digitalRead(A2) == HIGH) {
    tone(8, 523, 100); // ��������60��C5=523���ȣ�
  }
  delay(10); // ��΢�ӳ�����߷�������
}
