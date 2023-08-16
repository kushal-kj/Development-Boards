int relayPin=8;
int buttonPin=7;
int relayState;
int currentButtonState;
int PreviousButtonState;

void setup() {
  // put your setup code here, to run once:
  pinMode(relayPin,OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);
  Serial.begin(9600);
  relayState=LOW;

}

void loop() {
  // put your main code here, to run repeatedly:
  currentButtonState=digitalRead(buttonPin);    //read the button pin

  if(PreviousButtonState==HIGH && currentButtonState==LOW)
  {
    Serial.println("Button is pressed");

    relayState=!relayState;                 //Toggle the Relay

    digitalWrite(relayPin,relayState);

  }
 
 PreviousButtonState=currentButtonState;   //current state will become the previous state after each toggle
}
