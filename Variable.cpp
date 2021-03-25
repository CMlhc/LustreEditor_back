#include "Variable.h"
//using namespace std;

string Variable::GetName()
{
	return name;
}


void Variable::SetName(string name)
{
	this->name = name;
}


string Variable::GetType()
{
	return type;
}


void Variable::SetType(string type)
{
	this->type = type;
}

void Variable::SetByXml(TiXmlNode* pParent)
{
	if (pParent)
	{
		TiXmlElement* pElem;
		pElem = pParent->ToElement();
		if (pElem->Attribute("name"))
		{
			this->name = pElem->Attribute("name");
			//cout << this->name << endl;
		}

		if (pElem->Attribute("type"))
		{
			this->type = pElem->Attribute("type");
		}
	}
	
}







