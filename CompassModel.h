#ifndef __COMPASSMODEL_H__
#define __COMPASSMODEL_H__

class CompassModel
{
public:
	CompassModel(int heading, int pitch, int roll) :
		heading(heading),
		pitch(pitch),
		roll(roll)
	{};

	~CompassModel() {};

	int heading;
	int pitch;
	int roll;
};

#endif