#pragma once
//#include"head.h"
#include<string>
#include<vector>
#include"Operands.h"
using namespace std;


class Runnable
{
private:
	string name;
	Operands operands;
public:
	void SetName(string name);
	void SetNameByXml(TiXmlNode* pParent);
	string GetName();

	void SetOperands(Operands operands);
	void SetOperandsByXml(TiXmlNode* pParent);
	Operands GetOperands();

	void SetByXml(TiXmlNode* pParent);

};

