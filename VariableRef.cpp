#include "VariableRef.h"


string VariableRef::GetName()
{
	return name;
}

void VariableRef::SetName(string name)
{
	this->name = name;
}


void VariableRef::SetByXml(TiXmlNode* pParent)
{
	if (pParent)
	{
		TiXmlElement* pElem;
		pElem = pParent->ToElement();

		if (pElem->Attribute("Name"))
		{
			this->name = pElem->Attribute("Name");
			//cout << this->name << endl;
		}
	}
	


}
