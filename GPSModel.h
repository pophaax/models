#ifndef __GPSMODEL_H__
#define __GPSMODEL_H__

class GPSModel
{
public:
	GPSModel(
		std::string timestamp,
		double latitude,
		double longitude,
		double altitude,
		double speed,
		double heading,
		int satellitesUsed
	) :
		timestamp(timestamp),
		latitude(latitude),
		longitude(longitude),
		altitude(altitude),
		speed(speed),
		heading(heading),
		satellitesUsed(satellitesUsed)
	{};
	
	~GPSModel() {};

	std::string timestamp;
	double latitude;
	double longitude;
	double altitude;
	double speed;
	double heading;
	int satellitesUsed;
};

#endif