#include"Project.h"

void Project::SetName(string name)
{
	this->name = name;
}

void Project::SetNameByXml(TiXmlNode* pParent)
{
	TiXmlElement* pElem = pParent->ToElement();
	if (pElem->Attribute("Name"))
	{
		this->name = pElem->Attribute("Name");
	}
}

string Project::GetName()
{
	return name;
}

void Project::SetPackage(vector<Package>& package)
{
	for (int i = 0; i < package.size(); i++)
	{
		this->package.push_back(package[i]);
	}
}
void Project::SetPackageByXml(TiXmlNode* pParent)
{
	if (pParent->FirstChild("Package"))
	{
		TiXmlNode* pChild = pParent->FirstChild("Package");
		for (pChild; pChild; pChild = pChild->NextSibling())
		{
			Package temp;
			temp.SetByXml(pChild);
			package.push_back(temp);
		}
	}
	
}
vector<Package> Project::GetPackage()
{
	return package;
}

void Project::SetByXml(TiXmlNode* pParent)
{
	SetNameByXml(pParent);
	SetPackageByXml(pParent);
}
