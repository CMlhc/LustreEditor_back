#include "Task.h"

void Task::SetInput(vector<Variable>& input)
{
	for (int i = 0; i < input.size(); i++)
	{
		this->input.push_back(input[i]);
	}
}

void Task::SetInputByXml(TiXmlNode* pParent)
{
	
	TiXmlNode* pChild;
	if (pParent->FirstChild("Inputs"))
	{
		if (pParent->FirstChild("Inputs")->FirstChild("Variable"))
		{
			pChild = pParent->FirstChild("Inputs")->FirstChild("Variable");
			for (pChild; pChild; pChild = pChild->NextSibling())
			{
				Variable temp;
				temp.SetByXml(pChild);
				this->input.push_back(temp);
			}
		}
	}
	
	

}
vector<Variable> Task::GetInput()
{
	return this->input;
}


void Task::SetOutput(vector<Variable>& output)
{
	for (int i = 0; i < output.size(); i++)
	{
		this->output.push_back(output[i]);
	}
}
void Task::SetOutputByXml(TiXmlNode* pParent)
{
	TiXmlNode* pChild;
	if (pParent->FirstChild("Outputs"))
	{
		if (pParent->FirstChild("Outputs")->FirstChild("Variable"))
		{
			pChild = pParent->FirstChild("Outputs")->FirstChild("Variable");
			for (pChild; pChild; pChild = pChild->NextSibling())
			{
				Variable temp;
				temp.SetByXml(pChild);
				this->output.push_back(temp);
			}
		}
	}
	
	

}
vector<Variable> Task::GetOutput()
{
	return this->output;
}

void Task::SetLocals(vector<Variable>& locals)
{
	for (int i = 0; i < locals.size(); i++)
	{
		this->locals.push_back(locals[i]);
	}
}
void Task::SetLocalsByXml(TiXmlNode* pParent)
{
	TiXmlNode* pChild;
	if (pParent->FirstChild("Locals"))
	{
		if (pParent->FirstChild("Locals")->FirstChild("Variable"))
		{
			pChild = pParent->FirstChild("Locals")->FirstChild("Variable");
			for (pChild; pChild; pChild = pChild->NextSibling())
			{
				Variable temp;
				temp.SetByXml(pChild);
				this->locals.push_back(temp);
			}
		}
	}
	
	
}
vector<Variable> Task::GetLocals()
{
	return this->locals;
}

void Task::SetData(vector<Equation>& data)
{
	for (int i = 0; i < data.size(); i++)
	{
		this->data.push_back(data[i]);
	}
}
void Task::SetDataByXml(TiXmlNode* pParent)
{
	if (pParent->FirstChild("Data"))
	{
		if (pParent->FirstChild("Data")->FirstChild("Equation"))
		{
			TiXmlNode* pChild = pParent->FirstChild("Data")->FirstChild("Equation");
			for (pChild; pChild; pChild = pChild->NextSibling())
			{
				Equation temp;
				temp.SetByXml(pChild);
				if (temp.GetUuid() == "")
				{
					continue;
				}
				data.push_back(temp);

				cout << "yyy" << endl;
			}
		}
	}
	
	
}
vector<Equation> Task::GetData()
{
	return data;
}

void Task::SetByXml(TiXmlNode* pParent)
{
	SetInputByXml(pParent);
	SetOutputByXml(pParent);
	SetLocalsByXml(pParent);
	SetDataByXml(pParent);
}


