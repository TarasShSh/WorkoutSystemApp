// Shrug.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Shrug : public Vprava_base
{
public:
	Shrug(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ¬права дл€ розвитку верхньоњ частини трапец≥Їпод≥бного м'€за---" << endl
			<< endl;
		cout << " ¬иконанн€: " << endl;
		cout << " Х в≥зьм≥ть в обидв≥ руки (роз≥гнут≥, але не док≥нц€) гантел≥" << endl;
		cout << " Х п≥дн≥майте-опускайте плеч≥ з цими гантел€ми в руках" << endl;
		cout << " Х плеч≥ повинн≥ бути в≥дведен≥ назад, а лопатки зведен≥" << endl <<
			endl;
		cout << " Х ---повтор≥ть вправу 20 раз---" << endl;
    }
};

