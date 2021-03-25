#pragma once
#include"TimeInterval.h"
#include"ITimeDeviation.h"
using namespace std;

class BoundedTimeDistribution:public TimeInterval,public ITimeDeviation
{
};

