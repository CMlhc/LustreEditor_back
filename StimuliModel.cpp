#include "StimuliModel.h"

vector<Stimulus> StimuliModel::getGetStimuli() const
{
    return getStimuli;
}

void StimuliModel::setGetStimuli(vector<Stimulus> getStimuli)
{
    this->getStimuli = getStimuli;
}

vector<Clock> StimuliModel::getGetClocks() const
{
    return getClocks;
}

void StimuliModel::setGetClocks(vector<Clock> getClocks)
{
    this->getClocks = getClocks;
}

