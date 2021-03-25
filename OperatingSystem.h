#pragma once
#include<string>
#include<vector>
#include"OsOverhead.h"
#include"TaskScheduler.h"
#include"OsDataConsistency.h"
#include"InterruptController.h"
using namespace std;

class OperatingSystem
{
protected:
	string name;
	OsOverhead *overhead;
	vector<TaskScheduler> taskSchedulers;
    vector<OsDataConsistency> osDataConsistency;
    vector<InterruptController> interruptController;

public:
    string getName() const;
    void setName(string name);

    OsOverhead getOverhead() const;
    void setOverhead(OsOverhead overhead);

    vector<TaskScheduler> getTaskSchedulers() const;
    void setTaskSchedulers(vector<TaskScheduler> taskSchedulers);

};

