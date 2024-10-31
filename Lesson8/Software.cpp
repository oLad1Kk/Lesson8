#include "Software.h"

Software::Software()
{
	name = "undefined";
	manufacturer = "undefined";
}

Software::Software(string name, string manufacturer)
{
	this->name = name;
	this->manufacturer = manufacturer;
}

Software::~Software()
{
}

string Software::getName() const
{
	return name;
}

string Software::getManufacturer() const
{
	return manufacturer;
}

void Software::setName(string name)
{
	this->name = name;
}

void Software::setManufacturer(string manufacturer)
{
	this->manufacturer = manufacturer;
}