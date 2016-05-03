#ifndef __SYSTEMSTATEMODEL_H__
#define __SYSTEMSTATEMODEL_H__

#include "../models/GPSModel.h"
#include "../models/CompassModel.h"
#include "../models/WindsensorModel.h"

class SystemStateModel {
public:
	SystemStateModel(
		GPSModel gpsModel,
		WindsensorModel windsensorModel,
		CompassModel compassModel,
		int rudder,
		int sail,
		int pressure
	) :
		gpsModel(gpsModel),
		windsensorModel(windsensorModel),
		compassModel(compassModel),
		rudder(rudder),
		sail(sail),
		pressure(pressure)
	{};

	~SystemStateModel() {};

	GPSModel gpsModel;
	WindsensorModel windsensorModel;
	CompassModel compassModel;
	int rudder;
	int sail;
	int pressure;
};

#endif