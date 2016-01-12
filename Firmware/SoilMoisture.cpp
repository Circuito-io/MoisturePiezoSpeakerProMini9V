#include "SoilMoisture.h"

SoilMoisture::SoilMoisture(int pin) : signalPin(pin) {}

int SoilMoisture::read() //return SoilMoisture reading
{
	return analogRead(signalPin);
}


