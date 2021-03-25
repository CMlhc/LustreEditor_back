#pragma once
#include "FixedPeriodic.h"
#include"Time.h"
#include"ITimeDeviation.h"


class PeriodicStimulus 
{
protected:
	Time recurrence;
	Time offset;
	ITimeDeviation jitter;
	Time minDistance;
};

