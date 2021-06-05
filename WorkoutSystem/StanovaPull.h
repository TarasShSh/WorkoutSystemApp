// StanovaPull.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class StanovaPull : public Vprava_base
{
public:
	StanovaPull(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << "---вправа дл€ зм≥цненн€ м'€з≥в попереку, що дозвол€Ї в прис≥данн€х краще прокачувати ноги---" << endl << endl;

		cout << "¬иконанн€: " << endl;
		cout << "Х  поставте перед собою гантелю або штангу" << endl;
		cout << "Х  ≥ п≥дн≥майте штангу р≥вном≥рно ≥ вертикально, не опускаючи вниз" << endl;
		cout << "Х  плеч≥ повинн≥ бути в≥дведен≥ назад, а лопатки зведен≥" << endl << endl;

		cout << "Х  ---повтор≥ть вправу 10 раз---" << endl;
    }
};

