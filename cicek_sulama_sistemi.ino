int sensor = A0;
int motor = 4 ;

int veri;


void setup() {
  pinMode(sensor,INPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  veri=analogRead(sensor);
  Serial.println(veri);

if(veri>600)
{
  digitalWrite(motor,HIGH);
  delay(3000);
  digitalWrite(motor,LOW);
  delay(3000);
  veri=analogRead(sensor);
  if(veri>600){
    digitalWrite(motor,HIGH);
    delay(2000);
    digitalWrite(motor,LOW);
    delay(5000);
    }else {
      digitalWrite(motor,LOW);
      }
  }else{
    digitalWrite(motor,LOW);
    }
}
