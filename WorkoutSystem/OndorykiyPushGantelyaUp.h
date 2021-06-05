// OndorykiyPushGantelyaUp.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class OndorykiyPushGantelyaUp : public Vprava_base
{
public:
	OndorykiyPushGantelyaUp(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " Виконання: " << endl << endl;
		cout << " Оберіть не дуже важку гантель – ви повинні підняти її не вигнувши спину." << endl
			<< "Ваш хребет повинен залишатися стабільним та нейтральним." << endl
			<< "Виконайте 8 - 10 повторень на слабшому плечі," << endl
			<< " а потім виконайте таку ж кількість повторень з однаковою вагою на вашому сильнішому плечі." << endl;
		cout << " • повторіть вправу 15 раз на праву руку, 15 на ліву---" << endl;
    }
};

