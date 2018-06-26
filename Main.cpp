#include "TaxOffice.h"

int main()
{
	Residence a1("Addr1", 80);
	Residence a2("Addr2", 90);
	Residence a3("Addr3", 110);
	Residence a4("Addr4", 110);
	Residence a5("Addr5", 360);

	if (a1 == a2)
	{
		cout << "A1 is equal to A2" << endl;
	}
	else if (a2 > a2)
	{
		cout << "A1 is bigger to A2" << endl;
	}
	else
	{
		cout << "A1 is smaller to A2" << endl;
	}

	vector<Residence*> res;
	res.push_back(&a1);
	res.push_back(&a2);
	res.push_back(&a3);

	Declaration d2("yyy", 70);
	Declaration d1("xxx", 28, res);

	d2.addResidence(&a4);
	d2.addResidence(&a5);

	d1.display();
	d2.display();
	cout << endl;

	cout << ((d1.Area300()) ? "Extra real estate tax" : "No extra tax") << endl;

	cout << "Totaltax = " << d1.TotalTax() << endl;

	TaxOffice taxoff("Athens");

	taxoff.addDeclaration(d1);
	taxoff.addDeclaration(d2);

	vector<Declaration> dd;

	dd = taxoff.Taxup2000();

	cout << "Declarations with total tax more than 2000\n";
	for (unsigned i = 0; i < dd.size(); i++)
	{
		dd.at(i).display();
	}

	system("pause");
	return 0;
}
