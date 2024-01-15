//Digital read with a push button

#define  buttonReadpin 3
#define ledOutputpin 4 

int buttonState = LOW;
int lastButtonstate =  LOW;
int ledStatus = LOW;

unsigned long lastTime  = 0;
unsigned long debouceDelay = 65; 

void setup()
{
  
 pinMode(buttonReadpin, INPUT); 
 pinMode(ledOutputpin, OUTPUT);
  
 
}

void loop()
{
 
  buttonState = digitalRead(buttonReadpin);
  
  if(buttonState != LOW){
  
  	if ((millis() - lastTime) > debouceDelay){

      if(ledStatus == HIGH){

          ledStatus = LOW;
      
    
      }else if(ledStatus == LOW) {
    
      	ledStatus = HIGH;
    }
      
	
     digitalWrite(ledOutputpin, ledStatus); 
    }
  }

}