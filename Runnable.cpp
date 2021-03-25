#include "Runnable.h"

void Runnable::SetName(string name)
{
	this->name = name;
}

void Runnable::SetNameByXml(TiXmlNode* pParent)
{
	TiXmlElement* pElem = pParent->ToElement();
	if (pElem->Attribute("Name"))
	{
		this->name=pElem->Attribute("Name");
	}
}

string Runnable::GetName()
{
	return this->name;
}

void Runnable::SetOperands(Operands operands)
{
	this->operands = operands;
}

void Runnable::SetOperandsByXml(TiXmlNode* pParent)
{
	if (pParent->FirstChild("Operands"))
	{
		TiXmlNode* pChild = pParent->FirstChild("Operands");
		this->operands.SetOperandsByXml(pChild);
	}
	
}

Operands Runnable::GetOperands()
{
	return this->operands;
}

void Runnable::SetByXml(TiXmlNode* pParent)
{
	SetNameByXml(pParent);
	SetOperandsByXml(pParent);

}
