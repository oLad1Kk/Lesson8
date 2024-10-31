#pragma once
#include "Software.h"
#include "Date.h"
class Shareware :
    public Software
{
protected:
    Date install;
    int days;
public:
    Shareware();
    Shareware(string name, string manufacturer, Date install, int days);

    void setInstall(Date install);
    void setDays(int days);

    Date getInstall()const;
    int getDays()const;

    virtual void show()const override;
    virtual bool isAvailable()const override;

    virtual void load(ifstream& file) override
    {
        getline(file, name);
        getline(file, manufacturer);

        int d = 0, m = 0, y = 0;
        file >> d >> m >> y;
        install.setYear(y);
        install.setMonth(m);
        install.setYear(d);
        file >> days;

    }


};

