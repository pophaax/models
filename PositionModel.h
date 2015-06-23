#ifndef __POSITIONMODEL_H__
#define __POSITIONMODEL_H__

class PositionModel
{
public:
	PositionModel(double latitude, double longitude) :
		latitude(latitude),
		longitude(longitude)
	{};

	~PositionModel() {};

	double latitude;
	double longitude;
};

#endif