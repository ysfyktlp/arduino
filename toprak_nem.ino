int sensor = A0;
int led_kirmizi = 2;
int led_yesil = 3;
int veri;


void setup() {
  pinMode(sensor,INPUT);
  pinMode(led_kirmizi,OUTPUT);
  pinMode(led_yesil,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  veri=analogRead(sensor);
  Serial.println(veri);
  delay(100);

if(veri<600)
{
  digitalWrite(led_yesil,HIGH);
  digitalWrite(led_kirmizi,LOW);
  }
  else{
    digitalWrite(led_kirmizi,HIGH);
    digitalWrite(led_yesil,LOW);
    }
}
