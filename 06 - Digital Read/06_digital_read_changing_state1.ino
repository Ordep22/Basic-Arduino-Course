//Digital read with a push button

#define buttonReadpin 3 
#define ledOutputpin 4 
int buttonStatus = LOW;
int ledStatus = LOW;

void setup()
{
  
 pinMode(buttonReadpin, INPUT); 
 pinMode(ledOutputpin, OUTPUT);
  
 
}

void loop()
{
 
  buttonStatus = digitalRead(buttonReadpin);
  
  if(buttonStatus == HIGH){
  
    if(ledStatus == HIGH){
      
      	ledStatus = LOW;
          
    
    }else if(ledStatus == LOW) {
    
      	ledStatus = HIGH;
    }
    
    digitalWrite(ledOutputpin, ledStatus);
  
  }
  
 
}