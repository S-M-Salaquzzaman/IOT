
void setup() {
  // put your setup code here, to run once:
  pinMode(5,INPUT);   //We used D2 pin as a output
  Serial.begin(115200);
}

void loop() {
  int val=digitalRead(5);
  Serial.println(val);
  delay(500);
  
  
  // put your main code here, to run repeatedly:
            // wait 500ms
    }
 
                
