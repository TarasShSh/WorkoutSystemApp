// PojejGidr.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class PojejGidr : public Vprava_base
{
public:
	PojejGidr(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ¬права нац≥лена на зону стегон та с≥дниць, також залучаЇ до роботи мТ€зи корпусу" << endl << endl;
		cout << " ¬иконанн€: " << endl;
		cout << " Х станьте на кол≥на та долон≥ рук, ноги мають бути на ширин≥ плечей"
			<< endl;
		cout << " Х оч≥ мають дивитис€ вперед ≥ трохи вниз" << endl;
		cout << " Х залучаючи корпус, п≥дн≥м≥ть праве кол≥но вб≥к ≥ вгору(кол≥но маЇ пост≥йно бути з≥гнутим)" << endl;
		cout << " Х зупин≥тьс€ на вершечку, пот≥м опуст≥ть ногу на початкову позиц≥ю" <<
			endl << endl;
		cout << " Х зроб≥ть 10 повтор≥в на на праву ногу ≥ пот≥м 10 повтор≥в на л≥ву"
			<< endl;
    }
};

