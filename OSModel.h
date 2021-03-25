#pragma once
#include<string>
#include<vector>
#include"OperatingSystem.h"
#include"OsOverhead.h"
#include"Semaphore.h"
using namespace std;

class OSModel
{
protected:
	vector<OperatingSystem> operatingSystems;
	vector<OsOverhead> osOverheads;
    vector<Semaphore> semaphore;

public:
    vector<OperatingSystem> getOperatingSystems() const;
    void setOperatingSystems(vector<OperatingSystem> operatingSystems);

    vector<OsOverhead> getOsOverheads() const;
    void setOsOverheads(vector<OsOverhead> osOverheads);


    vector<Semaphore> getSemaphore() const;
    void setSemaphore(vector<Semaphore> semaphore);

};

