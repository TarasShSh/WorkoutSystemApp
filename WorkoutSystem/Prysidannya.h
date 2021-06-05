// Prysidannya.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Prysidannya : public Vprava_base
{
public:
	Prysidannya(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ”н≥версальна вправа, нац≥лена на багато мТ€з≥в нижньоњ частини т≥ла" <<
			endl << endl;
		cout << " ¬иконанн€: " << endl;
		cout << " Х поставте ноги тр≥шки ширше за ширину плечей" << endl;
		cout << " Х поставте руки перед собою дл€ балансу" << endl;
		cout << " Х тримайте спину пр€мо ≥ опускайтесь, поки стегна не утвор€ть паралель з п≥длогою" << endl;
		cout << " Х кол≥на не мають виступати за пальц≥ н≥г" << endl;
		cout << " Х видихн≥ть ≥ поверн≥тьс€ у вих≥дне положенн€" << endl << endl;
		cout << " Х повтор≥ть вправу 20 раз" << endl;
    }
};

