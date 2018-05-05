int veri;
int led=4;

void setup() {
  Serial.begin(9600);
  pinMode(veri,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  veri =digitalRead(2);
  Serial.print(veri);
  Serial.println("titresim değeri : ");

  if(veri==1){
    digitalWrite(led,HIGH);
    }else{
      digitalWrite(led,LOW);
      }
}
