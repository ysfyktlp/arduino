#include <Servo.h>
Servo silecek;

void setup() {
  silecek.attach(3);
  Serial.begin(9600);

}

void loop() {
  int veri=analogRead(A0);
Serial.print("Yağmur durumu: ");
Serial.println(veri);


if(veri>900){
  
  silecek.write(0);

} else if(veri>600){
  
  silecek.write(89);
  delay(500);
  silecek.write(0);
  delay(500);

}else if(veri>400){
  
  silecek.write(89);
  delay(400);
  silecek.write(0);
  delay(400);

}else if(veri<400){
  
  silecek.write(89);
  delay(300);
  silecek.write(0);
  delay(300);

}



}
