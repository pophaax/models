#ifndef __WAYPOINTMODEL_H__
#define __WAYPOINTMODEL_H__

#include "../models/PositionModel.h"

class WaypointModel
{
public:	
	WaypointModel(PositionModel positionModel, int radius, std::string id) :
		positionModel(positionModel),
		radius(radius),
		id(id)
	{};

	~WaypointModel() {};

	PositionModel positionModel;	
	int radius;
	std::string id;
};

#endif