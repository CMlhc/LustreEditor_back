#pragma once
#include<vector>
#include"Stimulus.h"
#include"Clock.h"

using namespace std;


class StimuliModel
{
protected:
	vector<Stimulus> getStimuli;
	vector<Clock> getClocks;
public:
    vector<Stimulus> getGetStimuli() const;
    void setGetStimuli(vector<Stimulus> getStimuli);

    vector<Clock> getGetClocks() const;
    void setGetClocks(vector<Clock> getClocks);

};

