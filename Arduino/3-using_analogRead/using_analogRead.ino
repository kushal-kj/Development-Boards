int readPin=A3;
float v2=0;
int delaytime=500;
int readVal;

void setup() {
  // put your setup code here, to run once:

pinMode(readPin,INPUT);
Serial.begin(9600);    //to begin the serial window with 9600 baudrate

}

void loop() {
  // put your main code here, to run repeatedly:

readVal=analogRead(readPin);
v2=(5./1023.)*readVal;
Serial.println(v2);
delay(delaytime);
}
