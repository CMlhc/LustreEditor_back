#include "Equation.h"


void Equation::SetUuid(string Uuid)
{
	this->Uuid = Uuid;
}

void Equation::SetUuidByXml(TiXmlNode* pParent)
{
	if (pParent->FirstChild("Pragmas"))
	{
		if (pParent->FirstChild("Pragmas")->FirstChild("ed:Equation"))
		{
			TiXmlNode* pChild = pParent->FirstChild("Pragmas")->FirstChild("ed:Equation");
			TiXmlElement* pElem = pChild->ToElement();
			if (pElem->Attribute("Uuid"))
			{
				this->Uuid = pElem->Attribute("Uuid");
			}
		}
	}
	
	
}

string Equation::GetUuid()
{
	return this->Uuid;
}



void Equation::SetLeft(string left)
{
	this->left.SetName(left);
}
void Equation::SetLeftByXml(TiXmlNode* pParent)
{
	TiXmlNode* pChild;
	if (pParent->FirstChild("Lefts"))
	{
		if (pParent->FirstChild("Lefts")->FirstChild("VariableRef"))
		{
			pChild = pParent->FirstChild("Lefts")->FirstChild("VariableRef");
			left.SetByXml(pChild);
		}
	}
	
	
}
VariableRef Equation::GetLeft()
{
	return this->left;
}


void Equation::SetCallExpression(CallExpression callexpression)
{
	this->callexpression = callexpression;
}
CallExpression Equation::GetCallExpression()
{
	return callexpression;
}

void Equation::SetCallExpressionByXml(TiXmlNode* pParent)
{
	if (pParent->FirstChild("Rright"))
	{
		if (pParent->FirstChild("Rright")->FirstChild("CallExpression"))
		{
			TiXmlNode* pChild = pParent->FirstChild("Rright")->FirstChild("CallExpression");
			if (pChild)
			{
				callexpression.SetByXml(pChild);
			}
		}
	}
	
	
}

void Equation::SetIdExpression(IdExpression idexpression)
{
	this->idexpression = idexpression;
}
IdExpression  Equation::GetIdExpression()
{
	return idexpression;
}

void Equation::SetIdExpressionByXml(TiXmlNode* pParent)
{
	if (pParent->FirstChild("Rright"))
	{
		if (pParent->FirstChild("Rright")->FirstChild("IdExpression"))
		{
			TiXmlNode* pChild = pParent->FirstChild("Rright")->FirstChild("IdExpression");
			if (pChild)
			{
				idexpression.SetByXml(pChild);
			}
		}
	}
	
	
}

void Equation::SetByXml(TiXmlNode* pParent)
{
	SetUuidByXml(pParent);
	SetLeftByXml(pParent);
	SetCallExpressionByXml(pParent);
	SetIdExpressionByXml(pParent);

}

