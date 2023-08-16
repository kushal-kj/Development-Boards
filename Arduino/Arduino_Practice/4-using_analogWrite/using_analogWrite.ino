int orangePin=6;
int brightness=255;//maximum is 255

//255= 5 volts
//0= 0 volts

void setup() {
  // put your setup code here, to run once:
pinMode(orangePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(orangePin,brightness);
}
