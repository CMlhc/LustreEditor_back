#include "OSModel.h"

vector<OperatingSystem> OSModel::getOperatingSystems() const
{
    return operatingSystems;
}

void OSModel::setOperatingSystems(vector<OperatingSystem> operatingSystems)
{
    this->operatingSystems = operatingSystems;
}

vector<OsOverhead> OSModel::getOsOverheads() const
{
    return osOverheads;
}

void OSModel::setOsOverheads(vector<OsOverhead> osOverheads)
{
    this->osOverheads = osOverheads;
}


vector<Semaphore> OSModel::getSemaphore() const
{
    return semaphore;
}

void OSModel::setSemaphore(vector<Semaphore> semaphore)
{
    this->semaphore = semaphore;
}

