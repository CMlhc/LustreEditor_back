#pragma once
//#include"head.h"
#include<string>
#include<vector>
#include"Package.h"
using namespace std;

class Project
{
private:
	string name;
	vector<Package> package;

public:
	void SetName(string name);
	void SetNameByXml(TiXmlNode* pParent);
	string GetName();

	void SetPackage(vector<Package>& package);
	void SetPackageByXml(TiXmlNode* pParent);
	vector<Package> GetPackage();

	void SetByXml(TiXmlNode* pParent);

};
