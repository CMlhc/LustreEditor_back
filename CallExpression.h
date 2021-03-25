#pragma once
//#include"head.h"
#include<string>
#include<vector>
#include"Runnable.h"
using namespace std;


class CallExpression
{
private:
	Runnable runnable;
public:
	void SetRunnable(Runnable runnable);
	void SetRunnableByXml(TiXmlNode* pParent);
	Runnable GetRunnable();

	void SetByXml(TiXmlNode* pParent);
};

