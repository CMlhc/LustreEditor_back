#pragma once
#include"Tag.h"
#include"ModeValueList.h"
#include"ModeConditionDisjunction.h"
#include<vector>

class Stimulus
{
protected:
	vector<Tag> tags;
	ModeValueList setModeValueList;
	ModeConditionDisjunction executionCondition;
};

