#pragma once
#include"Time.h"
#include"IContinuousValueDeviation.h"
#include"Scenario.h"
using namespace std;

class IContinuousValueDeviation
{
protected:
	Time step;
	//IContinuousValueDeviation occurrencesPerStep;
	double MAX_INCREASE_PER_STEP_EDEFAULT = 0.0;
	double maxIncreasePerStep = MAX_INCREASE_PER_STEP_EDEFAULT;
	double MAX_DECREASE_PER_STEP_EDEFAULT = 0.0;
	double maxDecreasePerStep = MAX_DECREASE_PER_STEP_EDEFAULT;
	Scenario scenario;


};

