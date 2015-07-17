#ifndef __WAYPOINTMODEL_H__
#define __WAYPOINTMODEL_H__

#include "../models/PositionModel.h"
#include <string>

class WaypointModel
{
public:	
	WaypointModel(PositionModel positionModel, int radius, std::string id, int time) :
		positionModel(positionModel),
		radius(radius),
		id(id),
		time(time)
	{};

	~WaypointModel() {};

	PositionModel positionModel;	
	int radius;
	std::string id;
	int time;
};

#endif