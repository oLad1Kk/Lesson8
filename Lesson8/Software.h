#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Software
{
	string name;
	string manufacturer;
public:
	Software();
	Software(string name, string company);
	virtual ~Software();

	string getName()const;
	string getManufacturer()const;

	void setName(string name);
	void setManufacturer(string manufacturer);

	virtual void show()const = 0;
	virtual void isAvailable()const = 0;

};

