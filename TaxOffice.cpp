#include "TaxOffice.h"

TaxOffice::TaxOffice(string r)
{
	region = r;
}

void TaxOffice::addDeclaration(Declaration d)
{
	declarations.push_back(d);
}

vector<Declaration> TaxOffice::Taxup2000()
{
	vector<Declaration> declarations2000;
	for (unsigned i = 0; i < declarations.size(); i++)
	{
		if (declarations.at(i).TotalTax() > 2000.0)
		{
			declarations2000.push_back(declarations.at(i));
		}
	}
	return declarations2000;
}
