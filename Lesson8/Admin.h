#pragma once
#include "Software.h"
#include <vector>
#include <algorithm>

class Admin
{
	vector<Software*>admin;
public:
	Admin(); // load from file
	~Admin();

	void addSoft(Software* obj);
	void showList()const;
};

