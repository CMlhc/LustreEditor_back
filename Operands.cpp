#include "Operands.h"


void Operands::SetOperands(vector<VariableRef>& VariableList1)
{
	for (int i = 0; i < VariableList1.size(); i++)
	{
		this->VariableList.push_back(VariableList1[i]);
	}
}

void Operands::SetOperandsByXml(TiXmlNode* pParent)
{
	if (pParent->FirstChild("VariableRef"))
	{
		TiXmlNode* pChild = pParent->FirstChild("VariableRef");
		for (pChild; pChild; pChild = pChild->NextSibling())
		{
			VariableRef temp;
			temp.SetByXml(pChild);
			this->VariableList.push_back(temp);
		}
	}
	
}

vector<VariableRef> Operands::GetOperands()
{
	return VariableList;
}