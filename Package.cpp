#include "Package.h"

void Package::SetName(string name)
{
	this->name = name;
}
void Package::SetNameByXml(TiXmlNode* pParent)
{
	TiXmlElement* pElem = pParent->ToElement();
	if (pElem->Attribute("Name"))
	{
		this->name = pElem->Attribute("Name");
	}
}
string Package::GetName()
{
	return name;
}

void Package::SetTask(vector<Task>& operator1)
{
	for (int i = 0; i < operator1.size(); i++)
	{
		this->task.push_back(operator1[i]);
	}
}

void Package::SetTaskByXml(TiXmlNode* pParent)
{
	if (pParent->FirstChild("Operator"))
	{
		TiXmlNode* pChild = pParent->FirstChild("Operator");
		for (pChild; pChild; pChild = pChild->NextSibling())
		{
			Task temp;
			temp.SetByXml(pChild);
			task.push_back(temp);
		}
	}
	
}

vector<Task> Package::GetTask()
{
	return this->task;
}

void Package::SetByXml(TiXmlNode* pParent)
{
	SetNameByXml(pParent);
	SetTaskByXml(pParent);
}
