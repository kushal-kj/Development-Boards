int button=8;
int buttonval;
int dt=100;
void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  Serial.begin(9600);
  digitalWrite(button,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonval=digitalRead(button);
  Serial.print("your button is = ");
  Serial.println(buttonval);
  delay(dt);

}
