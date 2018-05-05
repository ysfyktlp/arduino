#include <LiquidCrystal.h>
#include <dht11.h> // dht11 kütüphanesini ekliyoruz.
#define DHT11PIN 13 // DHT11PIN olarak Dijital 13 ü belirliyoruz.
LiquidCrystal lcd( 12, 11, 5, 4, 3, 2);
dht11 DHT11;

void setup()
{

  lcd.begin(16, 2);
}

void loop()
{
  
  // Bir satır boşluk bırakıyoruz serial monitörde.

  // Sensörün okunup okunmadığını konrol ediyoruz. 
  // chk 0 ise sorunsuz okunuyor demektir. Sorun yaşarsanız
  // chk değerini serial monitörde yazdırıp kontrol edebilirsiniz.
  int chk = DHT11.read(DHT11PIN);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Sicaklik: ");
  lcd.print((float)DHT11.temperature);
  lcd.setCursor(10,1);
  lcd.print("Derece"); 
   
  delay(3000);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Nem: ");
  lcd.print("Yuzde "); 
  lcd.print((float)DHT11.humidity);
   
  delay(3000);
  
}
