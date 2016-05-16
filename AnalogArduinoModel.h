#ifndef __ANALOGARDUINOMODEL_H__
#define __ANALOGARDUINOMODEL_H__

class AnalogArduinoModel
{
public:
	AnalogArduinoModel(int analogValue) :
		value(analogValue)
	{};

	~AnalogArduinoModel() {};

	int analogValue;
};

#endif
