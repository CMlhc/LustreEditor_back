#pragma once
//#include"head.h"
#include"tinystr.h"
#include"tinyxml.h"
#include<string>
#include<vector>
#include<iostream>
using namespace std;

class Variable
{
private:
	string name;
	string type;
public:
	string GetName();
	void SetName(string name);

	string GetType();
	void SetType(string type);

	//����xml�Ľڵ�
	void SetByXml(TiXmlNode* pParent);
};

