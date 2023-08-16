int xpin=A0;
int ypin=A1;
int sw=8;
int xval;
int yval;
int swval;
int dt=500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(xpin,INPUT);
  pinMode(ypin,INPUT);
  pinMode(sw,INPUT);
  digitalWrite(sw,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  xval=analogRead(xpin);
  yval=analogRead(ypin);
swval=digitalRead(sw);
delay(dt);
Serial.print("x value= ");
Serial.print(xval);
Serial.print(" , y value= ");
Serial.print(yval);
Serial.print(" , switch state=");
Serial.println(swval);

}
