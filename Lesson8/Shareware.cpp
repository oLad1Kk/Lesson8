#include "Shareware.h"

Shareware::Shareware()
{
    this->days = 3;
}

Shareware::Shareware(string name, string manufacturer, Date install, int days)
    : Software(name, manufacturer)
    
{
    this->install = install;
    this->days = days;
}

void Shareware::setInstall(Date install)
{
    this->install = install;
}

void Shareware::setDays(int days)
{
    this->days = days;
}

Date Shareware::getInstall() const
{
    return install;
}

int Shareware::getDays() const
{
    return days;
}

void Shareware::show() const
{
    cout << "\t Shareware Software \n";
    cout << "Name: " << name << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Install date: " << install << endl;
    cout << "Free term: " << days << endl;
    cout << "Available: " << (isAvailable() ? "YES" : "NO") << endl;
}

bool Shareware::isAvailable() const
{
    return Date() <= install + days;
}
