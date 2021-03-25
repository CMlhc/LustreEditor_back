#pragma once
#include"Time.h"



class PeriodicBurstStimulus
{
protected:
	Time recurrence;
	Time offset;
	Time burstLength;
	Time occurrenceMinDistance;
	int OCCURRENCE_COUNT_EDEFAULT = 0;
	int occurrenceCount = OCCURRENCE_COUNT_EDEFAULT;

};

