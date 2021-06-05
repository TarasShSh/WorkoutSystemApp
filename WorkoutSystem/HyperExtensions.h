// HyperExtensions.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class HyperExtensions : public Vprava_base
{
public:

	HyperExtensions(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ¬права дл€ розвитку випр€мл€ч≥в спини, згинач≥в гом≥лки ≥ с≥дничних м'€з≥в---" << endl << endl;
		cout << " ¬иконанн€: " << endl;
		cout << " Х впр≥тьс€ стегнами в опору ≥, закр≥пивши ноги" << endl;
		cout << " Х перебуваючи в з≥гнутому положенн≥ головою вниз, починайте п≥дн≥мати тулуб ≥ руки" << endl;
		cout << " Х п≥дн≥майте до повного випр€мленн€ спини без вигинанн€ голови у верхн≥й точц≥" << endl << endl;
		cout << " Х повтор≥ть вправу 10 раз" << endl << endl;
	}

};

