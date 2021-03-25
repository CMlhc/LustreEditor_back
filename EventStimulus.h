#pragma once
#include"Counter.h"
#include"TriggerEvent.h"
#include<vector>
using namespace std;

class EventStimulus
{
protected:
	Counter counter;
	vector<TriggerEvent> triggeringEvents;
};

