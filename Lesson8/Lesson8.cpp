// Lesson8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Software.h"
#include "FreeSoftware.h"
#include "Shareware.h"
#include "Commercial.h"
#include "Admin.h"

int main()
{
    //Software soft;
    Admin ITSTEP;

    ITSTEP.addSoft(new FreeSoftware());
    ITSTEP.addSoft(new Shareware("Photoshop", "Adobe", Date() - 10, 7));
    ITSTEP.addSoft(new Commercial("Office 365", "Microsoft", 100, Date() - 10, 365));

    ITSTEP.showList();

    //FreeSoftware soft1;
    //Shareware soft2("Photoshop", "Adobe", Date()-10, 7);
    //Commercial soft3("Office 365", "Microsoft",100, Date()-10, 365);
    //
    //soft3.show();
}


