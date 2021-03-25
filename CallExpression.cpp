#include "CallExpression.h"

void CallExpression::SetRunnable(Runnable runnable)
{
	this->runnable = runnable;

}

void CallExpression::SetRunnableByXml(TiXmlNode* pParent)
{
	if (pParent->FirstChild("BuildinOperator"))
	{
		TiXmlNode* pChild = pParent->FirstChild("BuildinOperator");
		runnable.SetByXml(pChild);
	}
	
}

Runnable CallExpression::GetRunnable()
{
	return this->runnable;
}

void CallExpression::SetByXml(TiXmlNode* pParent)
{
	SetRunnableByXml(pParent);
}
