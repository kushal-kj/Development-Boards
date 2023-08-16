
//USING DHT11 HUMIDITY AND TEMPERATURE SENSOR

#include "DHT.h"
#define DHTPIN 4          //Digital pin connected to the DHT sensor
#define DHTTYPE DHT11     //DHT11

DHT dht(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(2000);    //wait a few seconds between measurements
  float h=dht.readHumidity();
  float t=dht.readTemperature();    //read temperature as celsius(default)
  float f=dht.readTemperature(true);  //read temperature as Fahrenheit (isFahrenheit=true)
  
  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) 
  {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(f);
  Serial.println(F("°F "));

}


