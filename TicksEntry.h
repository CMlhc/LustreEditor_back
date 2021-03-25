#pragma once
#include<string>
#include<vector>

#include"ProcessingUnitDefinition.h"
#include"IDiscreteValueDeviation.h"

using namespace std;

class TicksEntry
{
protected:
	ProcessingUnitDefinition key;
	IDiscreteValueDeviation value;

};

