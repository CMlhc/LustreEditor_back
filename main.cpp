#include"tinystr.h"
#include"tinyxml.h"
#include"head.h"
#include<stdio.h>
#include<string>
#include<iostream>
#include"Project.h"

using namespace std;

static const char* FILENAME = "full_adder.xml";

void loadXML()
{
	TiXmlDocument doc;
	if (!doc.LoadFile(FILENAME));
	{
		cerr << doc.ErrorDesc() << endl;
	}

	TiXmlHandle hDoc(&doc);
	TiXmlElement* pElem;
	TiXmlHandle hRoot(0);

	pElem = hDoc.FirstChildElement().Element();
	

	hRoot = TiXmlHandle(pElem);
	//hRoot1 = TiXmlNode(hRoot);
	TiXmlHandle *hRoot1;

	//Çø¿é£ºProject
	{
		pElem = hRoot.FirstChild("Project").FirstChild("Package").FirstChild("Operator").FirstChild("Inputs").FirstChild("Variable").Element();

		TiXmlHandle temp(0);
		temp = hRoot.FirstChild("Project").FirstChild("Package").FirstChild("Operator").FirstChild("Inputs").FirstChild("Variable");
		//cout << temp.Element()->GetDocument(). << endl;

		TiXmlElement* temp1= temp.Element();

		//cout << pElem->Attribute("Name") << endl;

		if (pElem->Attribute("Name"))
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}

		Variable test;
		temp1 = temp.ToElement();
		temp1 = temp1->NextSiblingElement();

		cout << temp1->Attribute("name") << endl;
		TiXmlNode *tNode;
		tNode = temp.ToNode();

		test.SetByXml(tNode);
		cout << test.GetName() << endl;

		for (pElem; pElem; pElem = pElem->NextSiblingElement())
		{
			cout << pElem->Attribute("name") << endl;
		}
		
		cout << "-------------" << endl;
		
		temp = hRoot.FirstChild("Project").FirstChild("Package").FirstChild("Operator").FirstChild("Data").FirstChild("Equation").FirstChild("Pragmas").FirstChild("ed:Equation");
		//pElem = temp.Element();

		//cout << pElem->Attribute("Uuid") << endl;

		TiXmlNode* a;
		a = hRoot.ToNode();

		if (a->FirstChild("Project")->FirstChild("sss"))
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}

		cout << "-------" << endl;

		
		temp = hRoot.FirstChild("Project");
		a = temp.ToNode();

		Project ooo;
		ooo.SetByXml(a);



		//tNode = temp.ToNode();

		cout << "Final11" << endl;
		

		

		//Project project;
		//project.SetName(pElem->Attribute("Name"));


	}

	


}




int main()
{
	
	loadXML();


	cout << "----------" << endl;
	cout << "Finish" << endl;

	return 0;
}




