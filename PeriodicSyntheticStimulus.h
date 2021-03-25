#pragma once
#include "FixedPeriodic.h"
#include"Time.h"
#include<vector>

class PeriodicSyntheticStimulus 
{
protected:
	Time recurrence;
	Time offset;
	vector<Time> occurrenceTimes;
};

