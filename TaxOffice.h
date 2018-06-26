#pragma once
#include "Declaration.h"

class TaxOffice {
private:
	string region;
	vector<Declaration> declarations;
public:
	TaxOffice(string);
	void addDeclaration(Declaration);
	vector<Declaration> Taxup2000();
};
