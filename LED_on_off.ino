void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);   //We used D2 pin as a output

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(4,HIGH);     // pin D2 on
  delay(500);               // wait 500ms

  digitalWrite(4,LOW);     // pin D2 off
  delay(500);               // wait 500ms
}
