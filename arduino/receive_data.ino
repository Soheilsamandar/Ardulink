#include <Servo.h>

// setting for screen and servo
Servo servox;
int Xpos = 0;
void setup() {
  Serial.begin(9600);
  servox.attach(9);
  servox.write(Xpos);
}
void loop() {
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');
    int commaindex = data.indexOf(',');
    int data = data.substring(0, commaindex).toInt();
    Xpos = map(data, 0, 640, 0, 180);
    servox.write(Xpos);
  }
}