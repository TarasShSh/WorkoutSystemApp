// PidjomNohy.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class PidjomNohy : public Vprava_base
{
public:
	PidjomNohy(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ¬права зм≥цнюЇ та тон≥зуЇ стегна" << endl << endl;
		cout << " ¬иконанн€: " << endl;
		cout << " Х л€жте на правий б≥к" << endl;
		cout << " Х пов≥льно п≥д≥йм≥ть л≥ву ногу наст≥льки високо, наск≥льки зможете" <<
			endl;
		cout << " Х затримайтес€ на вершечку, пот≥м опуст≥ть ногу та початкову позиц≥ю"
			<< endl;
		cout << " Х впевн≥тьс€, що таз заф≥ксований ≥ не 'гул€Ї', а корпус напружений"
			<< endl << endl;
		cout << " Х повтор≥ть вправу 15 раз на правий б≥к, 15 на л≥вий" << endl;
    }
};

