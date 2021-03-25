#pragma once
//#include"head.h"
#include<string>
#include<vector>
#include"VariableRef.h"
using namespace std;

class Operands
{
private:
	//VariableRef variable1;
	//VariableRef variable2;
	vector<VariableRef> VariableList;
public:
	void SetOperands(vector<VariableRef>& VariableList1);
	void SetOperandsByXml(TiXmlNode* pParent);
	vector<VariableRef> GetOperands();

};

