#pragma once
#include <iostream>
#include <string>
using namespace std;

class Residence {
private:
	string address;
	int area;
public:
	Residence(string, int);
	void display();
	int getArea();
	bool operator==(Residence);
	bool operator>(Residence);
};
