#pragma once
#include"CurveType.h"
#include"Time.h"
#include"Frequency.h"


class ClockFunction
{
protected:
	Time period;
	Frequency peakToPeak;
	Time xOffset;
	Frequency yOffset;

};

