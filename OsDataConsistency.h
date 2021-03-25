#pragma once
#include"OsDataConsistencyMode.h"
#include"DataStability.h"
#include"NonAtomicDataCoherency.h"

class OsDataConsistency
{
protected:
	OsDataConsistencyMode mode;
	DataStability dataStability;
	NonAtomicDataCoherency nonAtomicDataCoherency;
};

