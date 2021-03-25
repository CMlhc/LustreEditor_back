#pragma once
#include"Clock.h"


class Scenario
{
protected:
	Clock clock;
	double SAMPLING_OFFSET_EDEFAULT = 0.0;
	double samplingOffset = 0.0;
	double SAMPLING_RECURRENCE_EDEFAULT = 1.0;
	double samplingRecurrence = 1.0;


};

