// Vidjimannya.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Vidjimannya : public Vprava_base
{
public:
	Vidjimannya(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " Віджимання - найпростіше і доступне вправу, яке в той же час дуже" << endl;
		cout << "ефективно.Виконувати його потрібно в такий спосіб : Потрібно лягти, долоні помістити на" << endl;
		cout << "рівні плечей, тіло і голова повинні розташовуватися паралельно підлозі; " << endl;
		cout << "Згинайте лікті і опускайтеся до підлоги " << endl << endl;
		cout << " • повторіть вправу 20 раз" << endl;
    }
};

