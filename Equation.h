#pragma once
//#include"head.h"
#include"CallExpression.h"
#include"IdExpression.h"
#include<string>
#include<vector>
using namespace std;

class Equation
{
private:
	string Uuid;
	VariableRef left;
	

	CallExpression callexpression;
	IdExpression idexpression;


public:
	void SetUuid(string Uuid);
	void SetUuidByXml(TiXmlNode* pParent);
	string GetUuid();

	void SetLeft(string left);
	void SetLeftByXml(TiXmlNode* pParent);
	VariableRef GetLeft();

	void SetCallExpression(CallExpression callexpression);
	void SetCallExpressionByXml(TiXmlNode* pParent);
	CallExpression GetCallExpression();

	void SetIdExpression(IdExpression idexpression);
	void SetIdExpressionByXml(TiXmlNode* pParent);
	IdExpression GetIdExpression();

	void SetByXml(TiXmlNode* pParent);
};

