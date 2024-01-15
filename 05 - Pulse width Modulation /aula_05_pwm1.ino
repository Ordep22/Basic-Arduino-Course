#define ledOne 3
#define stopTime 32

int ampli = 0;

void setup() {


pinMode(ledOne,OUTPUT);
  

}


void loop() {
  
 
  while(ampli < 256){
  
    analogWrite(ledOne,ampli);
    
    ampli += 32;
    
    delay(16*stopTime);
  }
  
  analogWrite(ledOne,LOW);
  ampli = 0;
  delay(6*stopTime);
  
  
}