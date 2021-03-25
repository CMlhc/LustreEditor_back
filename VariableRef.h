#pragma once
//#include"head.h"
#include"tinystr.h"
#include"tinyxml.h"
#include<string>
#include<vector>
#include<iostream>
using namespace std;

class VariableRef
{
private:
	string name;
public:
	string GetName();
	void SetName(string name);


	void SetByXml(TiXmlNode* pParent);
};

