#pragma once
#include<string>
#include<vector>
#include"OperatingSystem.h"
using namespace std;

class VendorOperatingSystem :public OperatingSystem
{
protected:
	string osName;
	string vendor;
	string version;
};

