int LED=9;
int brightness=0;
int fadeness=5;

void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED,brightness);
  brightness+=fadeness;

  if(brightness==0 || brightness==255)
  {
    fadeness=-fadeness; //to reverse the fadeness
  }
  delay(25);

}
