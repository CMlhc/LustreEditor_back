#pragma once
#include"Time.h"
#include"ITimeDeviation.h"


class RelativePeriodicStimulus
{
protected:
	Time offset;
	ITimeDeviation nextOccurrence;
};

