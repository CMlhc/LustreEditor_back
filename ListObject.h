#pragma once
#include "Value.h"
#include<vector>
using namespace std;


class ListObject :public Value
{
protected:
	vector<Value> values;
};

