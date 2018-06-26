#include "Residence.h"

Residence::Residence(string ad, int a)
{
	address = ad;
	area = a;
}

void Residence::display()
{
	cout << "Address: " << address << endl;
	cout << "Area: " << area << endl;
}

int Residence::getArea()
{
	return area;
}

bool Residence::operator==(Residence other)
{
	if (this->area == other.area)
	{
		return true;
	}
	return false;
}

bool Residence::operator>(Residence other)
{
	if (this->area > other.area)
	{
		return true;
	}
	return false;
}
