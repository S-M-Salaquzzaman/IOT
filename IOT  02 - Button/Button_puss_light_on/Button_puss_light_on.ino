
void setup() {
  // put your setup code here, to run once:
  pinMode(5,INPUT);   //We used D2 pin as a output
  Serial.begin(115200);
  pinMode(4,OUTPUT); 
}

void loop() {
  int val=digitalRead(5);
  Serial.println(val);
  delay(500);
  if(val==1)
  {
    
  digitalWrite(4,HIGH);     // pin D2 on
  delay(500);               // wait 500ms
    }
    else
    {digitalWrite(4,LOW);     // pin D2 on
     delay(500); }
  
  
  
    }
 
                
