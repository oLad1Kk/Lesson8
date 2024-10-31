#include "FreeSoftware.h"

FreeSoftware::FreeSoftware()
{

}

FreeSoftware::FreeSoftware(string name, string manufacturer) : Software(name, manufacturer)
{

}

void FreeSoftware::show() const
{
    cout << "\t Free Software \n";
    cout << "Name: " << name << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Available: " << (isAvailable() ? "YES" : "NO") << endl;
}

bool FreeSoftware::isAvailable() const
{
    return true;
}

