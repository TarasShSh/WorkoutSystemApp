// Lodochka.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Lodochka : public Vprava_base
{
public:
	Lodochka(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ‘ормуЇ гарну осанку, зн≥маЇ б≥ль у попереку, розвиваЇ м'€зи спини---" <<
			endl << endl;
		cout << " ¬иконанн€: " << endl;
		cout << " Х л€жте на п≥длогу обличч€м вниз" << endl;
		cout << " Х пот€гн≥ть руки вперед, а ноги - назад" << endl;
		cout << " Х видихаючи, напружте с≥дниц≥ ≥ поперек" << endl;
		cout << " Х п≥дн≥м≥ть верхн≥ ≥ нижн≥ к≥нц≥вки в≥д стат≥" << endl;
		cout << " Х затримайтес€ в Ђпоз≥ —уперменаї на пару секунд," << endl
			<< " пот≥м, вдихаючи, плавно опуститес€ в початкове положенн€" << endl;
		cout << " Х повтор≥ть вправу 10 раз" << endl
			<< endl;
	}
};

