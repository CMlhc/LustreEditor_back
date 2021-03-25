#pragma once
#include<string>
#include<vector>
#include"TaskSchedulingAlgorithm.h"
#include"SchedulerAssociation.h"
#include"Scheduler.h"

using namespace std;

class TaskScheduler:public Scheduler
{
protected:
	TaskSchedulingAlgorithm schedulingAlgorithm;
	SchedulerAssociation parentAssociation;


public:
    TaskSchedulingAlgorithm getSchedulingAlgorithm() const;
    void setSchedulingAlgorithm(TaskSchedulingAlgorithm schedulingAlgorithm);

   
};

