int relay=8;
int button=7;
int buttonState;

void setup() {
  // put your setup code here, to run once:
  pinMode(relay,OUTPUT);
  pinMode(button,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState=digitalRead(button);          //check if the button is pressed

  if(buttonState==LOW)
  {
    Serial.println("button is being pressed");
    digitalWrite(relay,HIGH);                //turn ON
  
  }
  else
  {
    Serial.println("button is not pressed");
    digitalWrite(relay,LOW);                 //turn OFF
    
  }


}
