#pragma once
#include<string>
#include<vector>
#include"OsAPIOverhead.h"
#include"OsISROverhead.h"

using namespace std;

class OsOverhead
{
protected:
	OsAPIOverhead apiOverhead;
    OsISROverhead isrCategory1Overhead;
    OsISROverhead isrCategory2Overhead;


public:
    OsAPIOverhead getApiOverhead() const;
    void setApiOverhead(OsAPIOverhead apiOverhead);

};

