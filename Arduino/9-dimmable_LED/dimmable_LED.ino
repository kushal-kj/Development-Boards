int potpin=A2;
int ledpin=10;
int readval;
float ledval;


void setup() {
  // put your setup code here, to run once:
pinMode(potpin,INPUT);
pinMode(ledpin,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
readval=analogRead(potpin);
ledval=(255./1023.)*readval;
analogWrite(ledpin,ledval);
Serial.println(ledval);


}
