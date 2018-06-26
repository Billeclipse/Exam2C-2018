#include "Declaration.h"

Declaration::Declaration(string fn, int a)
{
	fullname = fn;
	age = a;
}

Declaration::Declaration(string fn, int a, vector<Residence*> res)
{
	fullname = fn;
	age = a;
	residences = res;
}

void Declaration::addResidence(Residence *res)
{
	residences.push_back(res);
}

void Declaration::display()
{	
	cout << "Fullname: " << fullname << endl;
	cout << "Age: " << age << endl;
	cout << "Residences:" << endl;
	cout << "-------------" << endl;
	for (unsigned i = 0; i < residences.size(); i++)
	{		
		residences.at(i)->display();
		cout << endl;
	}
}

bool Declaration::Area300()
{	
	int total_area = 0;
	for (unsigned i = 0; i < residences.size(); i++)
	{
		total_area += residences.at(i)->getArea();
	}
	if (total_area > 300)
	{
		return true;
	}
	return false;
}

double Declaration::TotalTax()
{
	double total_tax = 0.0;
	for (unsigned i = 0; i < residences.size(); i++)
	{
		total_tax += 1.4 * residences.at(i)->getArea();
	}
	if (Area300())
	{
		total_tax += 1500;
	}
	return total_tax;
}
