#pragma once
#include "Software.h"
class FreeSoftware :
    public Software
{
public:
    FreeSoftware();
    FreeSoftware(string name, string manufacturer);

    virtual void show()const override;
    virtual bool isAvailable()const override;

    virtual void load(ifstream& file) override
    {
        getline(file, name);
        getline(file, manufacturer);
    }
};

