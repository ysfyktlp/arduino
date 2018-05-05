#include <LiquidCrystal.h>
#include <dht11.h> // dht11 kütüphanesini ekliyoruz.
#define DHT11PIN 13 // DHT11PIN olarak Dijital 13 ü belirliyoruz.
LiquidCrystal lcd( 12, 11, 5, 4, 3, 2);
dht11 DHT11;

void setup()
{
  //Serial.begin(9600); // Seri iletişimi başlatıyoruz.
  //Serial.println("bilisimderslerim.com");
  lcd.begin(16, 2);
}

void loop()
{
  
  // Bir satır boşluk bırakıyoruz serial monitörde.

  // Sensörün okunup okunmadığını konrol ediyoruz. 
  // chk 0 ise sorunsuz okunuyor demektir. Sorun yaşarsanız
  // chk değerini serial monitörde yazdırıp kontrol edebilirsiniz.
  int chk = DHT11.read(DHT11PIN);

  /*Sensörden gelen verileri serial monitörde yazdırıyoruz.
  Serial.print("Nem (%): ");
  Serial.println((float)DHT11.humidity, 2);

  Serial.print("Sicaklik (Santigrat): ");
  Serial.println((float)DHT11.temperature, 2);

  Serial.print("Sicaklik (Fahrenheit): ");
  Serial.println(DHT11.fahrenheit(), 2);

  Serial.print("Sicaklik (Kelvin): ");
  Serial.println(DHT11.kelvin(), 2);

  // Çiğ Oluşma Noktası, Dew Point
  Serial.print("Cig Olusma Noktasi: ");
  Serial.println(DHT11.dewPoint(), 2);

  // 2 saniye bekliyoruz. 2 saniyede bir veriler ekrana yazdırılacak.
  delay(2000); */

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
  
  /*lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Fahrenheit ");
  lcd.print((float)DHT11.fahrenheit());
  lcd.print(" D");  
  
  lcd.setCursor(0,1);
  lcd.print("Kelvin: ");
  lcd.print((float)DHT11.kelvin());  
  lcd.print(" D");

  delay(3000);
  lcd.clear();*/
}
