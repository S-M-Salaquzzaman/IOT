
void setup() {
  
  Serial.begin(115200);
  pinMode(5,OUTPUT);
 
}

void loop() {
  int val=analogRead(A0);
  Serial.println(val);
  delay(1000);

    if(val>=500)
    {
      digitalWrite(5,HIGH);
      delay(1000);
      }
      else
      {
        digitalWrite(5,LOW);
        delay(1000);
        }
 
    }
 
                
