#include "OperatingSystem.h"

string OperatingSystem::getName() const
{
    return name;
}

void OperatingSystem::setName(string name)
{
    this->name = name;
}



vector<TaskScheduler> OperatingSystem::getTaskSchedulers() const
{
    return taskSchedulers;
}

void OperatingSystem::setTaskSchedulers(vector<TaskScheduler> taskSchedulers)
{
    this->taskSchedulers = taskSchedulers;
}

