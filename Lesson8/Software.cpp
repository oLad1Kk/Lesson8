#include "Software.h"

Software::Software()
{
}

Software::Software(string name, string company)
{
    this->name = name;
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
    this->name = name;
}

void Software::show() const
{
}

void Software::isAvailable() const
{
    
}
