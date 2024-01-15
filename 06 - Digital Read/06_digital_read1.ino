//Digital read with a push button

#define buttonReadpin 3 
#define ledOutputpin 4 
int buttonStatus = LOW;

void setup()
{
  
 pinMode(buttonReadpin, INPUT); 
 pinMode(ledOutputpin, OUTPUT);
  
 
}

void loop()
{
 
  buttonStatus = digitalRead(buttonReadpin);
  
  if(buttonStatus == HIGH){
  
  	digitalWrite(ledOutputpin, HIGH);
  
  }
  else{
  
  	digitalWrite(ledOutputpin, LOW);
    
    
  }
 
}