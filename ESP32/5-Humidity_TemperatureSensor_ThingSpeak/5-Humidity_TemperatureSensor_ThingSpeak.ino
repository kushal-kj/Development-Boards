#include <WiFi.h>
#include "ThingSpeak.h"
#include "DHT.h"
#define DHTPIN 4          //Digital pin connected to the DHT sensor
#define DHTTYPE DHT11     //DHT11

DHT dht(DHTPIN,DHTTYPE);

const char* ssid="student";   //your network SSID name
const char* password="12345678";    //your network password
WiFiClient client;

unsigned long myChannelNumber=2224062;
const char* myWriteAPIkey="TLMIX4DQ3G6ODEQ6";   //to write data to cloud, you need to use WriteAPIkey

//Timer variables
unsigned long lastTime=0;
unsigned long timerDelay=30000;   //Thingspeak allows you to write the next data only after 30 seconds

//variable to hold temperature values
float temperature;
float humidity;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);   //Initialize Serial
  WiFi.mode(WIFI_STA);    //configure the WIFI mode
  ThingSpeak.begin(client);   //Initialize Thingspeak
  dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

  if((millis()-lastTime)>timerDelay){

    //connect or reconnect to WIFI
    if(WiFi.status()!=WL_CONNECTED)
    {
      Serial.print("Attempting to connect");

      while(WiFi.status()!=WL_CONNECTED)      //when WIFI is attempting to connect.
      {
        WiFi.begin(ssid,password);
        delay(5000);
      }
      Serial.print("\nConnected.");

    }


  delay(2000);    //wait a few seconds between measurements
  
  float temperature=dht.readTemperature();    //read temperature as celsius(default)
  
  float humidity=dht.readHumidity();
  
  // Check if any reads failed and exit early (to try again).
  if (isnan(humidity) || isnan(temperature) ) 
  {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }


  Serial.print(F(" Temperature: "));
  Serial.print(temperature);
  Serial.print(F("°C "));
  Serial.print(F(" Humidity: "));
  Serial.print(humidity);
  Serial.println("%");

  ThingSpeak.setField(1,temperature);
  ThingSpeak.setField(2,humidity);

  int x=ThingSpeak.writeFields(myChannelNumber,myWriteAPIkey);
    

  if(x==200)
    {
      Serial.println("Channel Update successful.");
    }
  else{
      Serial.println("Problem updating the channel.HTTP error code"+String(x));

    }
  lastTime=millis();
  }

}
