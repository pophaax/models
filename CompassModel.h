#ifndef __COMPASSMODEL_H__
#define __COMPASSMODEL_H__

class CompassModel
{
public:
	CompassModel(int heading, int pitch, int roll, int accelX, int accelY, int accelZ) :
		heading(heading),
		pitch(pitch),
		roll(roll),
		accelX(accelX),
		accelX(accelY),
		accelX(accelZ)
	{};

	~CompassModel() {};

	int heading;
	int pitch;
	int roll;
        
        int accelX;
	int accelY; 
	int accelZ;
};

#endif
