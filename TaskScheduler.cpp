#include "TaskScheduler.h"

TaskSchedulingAlgorithm TaskScheduler::getSchedulingAlgorithm() const
{
    return schedulingAlgorithm;
}

void TaskScheduler::setSchedulingAlgorithm(TaskSchedulingAlgorithm schedulingAlgorithm)
{
    this->schedulingAlgorithm = schedulingAlgorithm;
}


