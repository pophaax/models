#ifndef __GPSMODEL_H__
#define __GPSMODEL_H__

struct GPSModel
{
	std::string timestamp;
	double latitude;
	double longitude;
	double altitude;
	double speed;
	double heading;
	int satellitesUsed;
};

#endif