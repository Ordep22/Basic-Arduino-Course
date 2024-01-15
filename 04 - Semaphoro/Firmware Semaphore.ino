// Lesson four  - Semaphoro

/*
int ledRed = 8;
int ledYellow = 9;
int ledGreen = 10;
*/

#define ledRed 8
#define ledYellow 9
#define ledGreen 10

void HighLed(int ledTohigh,int time);

void HighLed(int ledTohigh,int time){
	
	digitalWrite(ledTohigh, HIGH);
  	delay(time);
  	digitalWrite(ledTohigh, LOW);
  	delay(time);  
}

//On setup we have to define the modo of pins
void setup() 
{
  
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  pinMode(ledYellow,OUTPUT);

  
}

//Here we have to construct the way of pins going to work
void loop() 
{
  
	
  HighLed( ledRed,1000);
  HighLed( ledYellow,500);
  HighLed( ledGreen,1500);


}