#pragma once
#include "Residence.h"
#include <vector>

class Declaration {
private:
	string fullname;
	int age;
	vector<Residence*> residences;
public:
	Declaration(string, int);
	Declaration(string, int, vector<Residence*>);
	void addResidence(Residence*);
	void display();
	bool Area300();
	double TotalTax();
};
