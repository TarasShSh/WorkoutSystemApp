// StepUps.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class StepUps : public Vprava_base
{
public:
	StepUps(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ¬права працюЇ з вашими мТ€зами стегон та с≥дниць, покращуЇ вашу р≥вновагу" << endl << endl;
		cout << " ¬иконанн€: " << endl;
		cout << " Х станьте на лавочку правою ногою, п≥дн≥м≥ть л≥ве кол≥но вгору, утримуючи гантел≥ по боках" << endl;
		cout << " Х опуст≥ть л≥ву ногу, з≥йд≥ть з лавки чи ≥ншого пристосуванн€" << endl
			<< endl;
		cout << " Х повтор≥ть 2 п≥дходи (15 на праву ногу, 15 на л≥ву)" << endl;
    }
};

