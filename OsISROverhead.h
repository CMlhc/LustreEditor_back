#pragma once
#include"Ticks.h"
class OsISROverhead
{
protected:
	Ticks preExecutionOverhead;
	Ticks postExecutionOverhead;
};

