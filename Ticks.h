#pragma once
#include<string>
#include<vector>
#include<map>
#include"IDiscreteValueDeviation.h"
#include"ProcessingUnitDefinition.h"
#include"ComputationItem.h"
using namespace std;

class Ticks:public ComputationItem
{
protected:
	IDiscreteValueDeviation default_;
	map<ProcessingUnitDefinition, IDiscreteValueDeviation> extended;

};

