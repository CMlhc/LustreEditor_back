#pragma once
//#include"head.h"
#include<string>
#include<vector>
#include"Variable.h"
#include"Equation.h"

using namespace std;



class Task
{
protected:


	vector<Variable> input;
	vector<Variable> output;
	vector<Variable> locals;
	vector<Equation> data;
public:
	void SetInput(vector<Variable>& input);
	void SetInputByXml(TiXmlNode* pParent);
	vector<Variable> GetInput();

	void SetOutput(vector<Variable>& output);
	void SetOutputByXml(TiXmlNode* pParent);
	vector<Variable> GetOutput();

	void SetLocals(vector<Variable>& locals);
	void SetLocalsByXml(TiXmlNode* pParent);
	vector<Variable> GetLocals();

	void SetData(vector<Equation>& data);
	void SetDataByXml(TiXmlNode* pParent);
	vector<Equation> GetData();
	
	void SetByXml(TiXmlNode* pParent);
};

