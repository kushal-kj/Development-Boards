int buttonPin=7;
int buzzerPin=3;

int buttonState;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState=digitalRead(buttonPin);

  if(buttonState==LOW)
  {
    Serial.println("button is pressed");
    digitalWrite(buzzerPin,HIGH);

  }
  else{
    Serial.println("button is not pressed");
    digitalWrite(buzzerPin,LOW);

  }

}
