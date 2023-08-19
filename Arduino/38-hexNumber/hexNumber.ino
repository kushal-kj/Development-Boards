byte mybyte=0x00;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(mybyte,DEC);
Serial.print("   ");
Serial.print(mybyte,BIN);
Serial.print("   ");
Serial.println(mybyte,HEX);
mybyte=mybyte+1;
delay(1000);
}
