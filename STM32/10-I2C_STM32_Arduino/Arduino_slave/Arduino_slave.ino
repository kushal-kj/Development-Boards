#include <Wire.h>

void setup()
{
  Wire.begin(4);
  Wire.onReceive(receiveEvent);   //register event
  Serial.begin(9600);
}

void loop()
{
  delay(100);
}

void receiveEvent(int howMany)
{
  while(0<Wire.available())
  {
    char c=Wire.read();
    Serial.print(c);
  }
  Serial.print("\n");
  
}