#include "Commercial.h"

Commercial::Commercial()
{
    this->price = 0;
}

Commercial::Commercial(string name, string manufacturer, double price, Date install, int days)
    : Shareware(name, manufacturer, install, days)
{
    this->price = price;
}

void Commercial::setPrice(double price)
{
    this->price = price;
}

double Commercial::getPrice() const
{
    return price;
}

void Commercial::show() const
{
    cout << "\t Commercial Software \n";
    cout << "Name: " << name << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Price: " << price << endl;
    cout << "Install date: " << install << endl;
    cout << "Free term: " << days << endl;
    cout << "Available: " << (isAvailable() ? "YES" : "NO") << endl;
}
