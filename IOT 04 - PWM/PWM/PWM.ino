
void setup() {
  
  pinMode(5,OUTPUT);
 
}

void loop() {
  for(int val=0;val<256;val++)
  {analogWrite(5,val);
  delay(30);
  }
  for(int val=256;val>=0;val--)
  {analogWrite(5,val);
  delay(30);
  }
 
    }
 
                
