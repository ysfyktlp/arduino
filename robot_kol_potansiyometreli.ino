#include <Servo.h>
Servo ilerigeri;
Servo yukariasagi;
Servo agiz;
Servo sagsol;


void setup() {
  ilerigeri.attach(3);
  yukariasagi.attach(5);
  agiz.attach(6);
  sagsol.attach(9);
}

void loop() {
  int pot1=analogRead(A0);
  int pot2=analogRead(A1);
  int pot3=analogRead(A2);
  int pot4=analogRead(A3);

  pot1 = map(pot1,0,1023,0,89);
  pot2 = map(pot2,0,1023,0,89);
  pot3 = map(pot3,0,1023,0,89);
  pot4 = map(pot4,0,1023,0,89);

  ilerigeri.write(pot1);
  yukariasagi.write(pot2);
  agiz.write(pot3);
  sagsol.write(pot4);

}
