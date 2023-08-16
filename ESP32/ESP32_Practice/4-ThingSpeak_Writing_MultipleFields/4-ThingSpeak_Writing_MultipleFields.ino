#include <WiFi.h>
#include "ThingSpeak.h"

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
    temperature=60;
    humidity=90;

    Serial.print(" Temperature (C) : ");
    Serial.print(temperature);

    Serial.print(" Humidity (%) : ");
    Serial.println(humidity);

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
