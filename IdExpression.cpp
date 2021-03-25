#include "IdExpression.h"


void IdExpression::SetVariableRef(VariableRef variableref)
{
	this->variableref = variableref;
}

void IdExpression::SetVariableRefByXml(TiXmlNode* pParent)
{
	if (pParent->FirstChild("VariableRef"))
	{
		TiXmlNode* pChild = pParent->FirstChild("VariableRef");
		this->variableref.SetByXml(pChild);
	}
	
}

VariableRef IdExpression::GetVariableRef()
{
	return variableref;
}

void IdExpression::SetByXml(TiXmlNode* pParent)
{
	SetVariableRefByXml(pParent);
}
