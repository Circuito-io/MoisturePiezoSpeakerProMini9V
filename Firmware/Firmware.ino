#include "Global.h"

void setup() 
{
	Serial.begin(9600);
	Serial.println("start");
}

void loop() 
{	
	if(soilMoisture.read() > 400)
	{
		Serial.println("High moisture detected");
		piezoSpeaker.write(500); //play tone of 500 Hz
		delay(100);
		piezoSpeaker.write(600); //play tone of 600 Hz
		delay(100);
		piezoSpeaker.write(700); //play tone of 700 Hz
		delay(100);
		piezoSpeaker.turnOff();
	}
	delay(20);
  
}
