int ses_sensoru = A0;
int led = 4;
int alkis = 0;
long algilama_araligi_baslangic = 0;
long algilama_araligi = 0;
boolean isik_durumu = false;
 
void setup() {
  pinMode(ses_sensoru, INPUT);
  pinMode(led,OUTPUT);
}
 
void loop() {
 
  int sensor_durumu = digitalRead(ses_sensoru);
 
  if (sensor_durumu == 0)
  {
    if (alkis == 0)
    {
      algilama_araligi_baslangic = algilama_araligi = millis();
      alkis++;
    }
    else if (alkis > 0 && millis()-algilama_araligi >= 50)
    {
      algilama_araligi = millis();
      alkis++;
    }
  }
 
  if (millis()-algilama_araligi_baslangic >= 400)
  {
    if (alkis == 2)
    {
      if (!isik_durumu)
        {
          isik_durumu = true;
          digitalWrite(led, HIGH);
        }
        else if (isik_durumu)
        {
          isik_durumu = false;
          digitalWrite(led, LOW);
        }
    }
    alkis = 0;
  }
}
