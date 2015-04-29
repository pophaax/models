#include "../models/GPSModel.h"
#include "../models/CompassModel.h"
#include "../models/WindsensorModel.h"

struct SystemStateModel {
	SystemStateModel(
		GPSModel gpsModel,
		WindsensorModel windsensorModel,
		CompassModel compassModel,
		int rudder,
		int sail
	) :
		gpsModel(gpsModel),
		windsensorModel(windsensorModel),
		compassModel(compassModel),
		rudder(rudder),
		sail(sail)
	{};

	~SystemStateModel() {};

	GPSModel gpsModel;
	WindsensorModel windsensorModel;
	CompassModel compassModel;
	int rudder;
	int sail;
};