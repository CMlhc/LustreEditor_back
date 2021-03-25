#pragma once
//#include"head.h"
#include<string>
#include<vector>
#include"Task.h"
using namespace std;


class Package
{
private:
	string name;
	vector<Task> task;
public:
	void SetName(string name);
	void SetNameByXml(TiXmlNode* pParent);
	string GetName();

	void SetTask(vector<Task>& operator1);
	void SetTaskByXml(TiXmlNode* pParent);
	vector<Task> GetTask();

	void SetByXml(TiXmlNode* pParent);
};

