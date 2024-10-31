#include "Admin.h"
#include "FreeSoftware.h"
#include "Shareware.h"
#include "Commercial.h"

Admin::Admin()
{
	Software* p = nullptr;
	ifstream file("info-soft.txt");
	if (file.is_open())
	{
		string type = "";
		while (!file.eof()) {
			getline(file, type);
			if (type == "Free")
			{
				p = new	FreeSoftware();
				p->load(file);
				admin.push_back(p);
			}
			else if (type == "ShareWare")
			{
				p = new	Shareware();
				p->load(file);
				admin.push_back(p);
			}
			else if (type == "Commercial")
			{
				p = new	Commercial();
				p->load(file);
				admin.push_back(p);
			}
		}
		file.close();
	}
	else
	{
		cout << "Error, file not opened\n";
	}
}

Admin::~Admin()
{
	for (auto item : admin)
	{
		delete item;
	}
}

void Admin::addSoft(Software* obj)
{
	if (obj != nullptr)
	{
		admin.push_back(obj);
	}
}

void Admin::showList() const
{
	for (int i = 0; i < admin.size(); i++)
	{
		cout << "#" << i + 1;
		admin[i]->show();
		cout << endl;
	}
}
