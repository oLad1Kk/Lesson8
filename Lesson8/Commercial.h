#pragma once
#include "Shareware.h"
class Commercial :
    public Shareware
{
protected:
    double price;
public:
    Commercial();
    Commercial(string name, string manufacturer, double price, Date install, int days);

    void setPrice(double price);
    double getPrice()const;
    
    void show()const override;

    void load(ifstream& file) override {
        Shareware::load(file);
        file >> price;
    }

};

