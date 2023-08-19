int mypin=A2;
int readVal;
float v2;
int delaytime=500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 readVal=analogRead(mypin);
v2=(5./1023.)*readVal;
Serial.println(v2);
delay(delaytime);

}
