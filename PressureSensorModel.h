#ifndef __PRESSURESENSORMODEL_H__
#define __PRESSURESENSORMODEL_H__

class PressureSensorModel
{
public:
	PressureSensorModel(int pressure) :
		pressure(pressure)
	{};

	~PressureSensorModel() {};

	int pressure;
};

#endif
