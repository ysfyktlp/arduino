const int in1=3;
const int in2=4;

int sensor = A0;
int veri;


void setup() {
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(sensor,INPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  veri=analogRead(sensor);
  Serial.println(veri);

if(veri>700)
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  delay(4000);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  delay(4000);
  veri=analogRead(sensor);
  if(veri>700){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    delay(4000);
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    delay(7000);
    }else {
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      }
  }else{
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    }


}
