#pragma once
//#include"head.h"
#include<string>
#include<vector>
#include"VariableRef.h"
using namespace std;


class IdExpression
{
private:
	VariableRef variableref;
public:
	void SetVariableRef(VariableRef variableref);
	void SetVariableRefByXml(TiXmlNode* pParent);
	VariableRef GetVariableRef();

	//ͨ��xmlһ������
	void SetByXml(TiXmlNode* pParent);
};

