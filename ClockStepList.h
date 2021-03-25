#pragma once
#include"Time.h"
#include"ClockStep.h"
#include<vector>

class ClockStepList
{
protected:
	Time period;
	vector<ClockStep> entries;
};

