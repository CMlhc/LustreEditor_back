#pragma once
#include<string>
#include<vector>
#include<map>
#include"Task.h"
#include"TaskScheduler.h"
#include"SchedulingParameters.h"
#include"ParameterExtension.h"
using namespace std;

class TaskAllocation
{
protected:
	Task *task;
	TaskScheduler *scheduler;
	SchedulingParameters schedulingParameters;
	vector<ParameterExtension> parameterExtensions;
};

