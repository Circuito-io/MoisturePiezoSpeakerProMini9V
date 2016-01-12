#ifndef SoilMoisture_H
#define SoilMoisture_H

#include "arduino.h"

class SoilMoisture
{
	public:
		SoilMoisture(int pin);
		int read(); 
		
	private:
		const int signalPin;
};
#endif //SoilMoisture_H
