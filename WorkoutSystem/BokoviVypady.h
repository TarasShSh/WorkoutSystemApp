// BokoviVypady.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class BokoviVypady : public Vprava_base
{
public:

	//operator string() const override;



	BokoviVypady(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
	{
		cout << " ¬права, зосереджена б≥льше на зовн≥шн≥й частин≥ с≥дниць та стегон" <<
		endl << endl;
	cout << " ¬иконанн€: " << endl;
	cout << " Х поставте ноги тр≥шки ширше за ширину стегон, корпус працюЇ, оч≥ дивл€тьс€ пр€мо" << endl;
	cout << " Х роб≥ть широкий крок вправо ≥ прис≥даЇте" << endl;
	cout << " Х опускайте т≥ло доти, доки праве стегно не утворюЇ паралель з п≥длогою" << endl;
	cout << " Х зупин≥тьс€, в≥дштовх≥тьс€ л≥вою ногою ≥ поверн≥тьс€ на початкову позиц≥ю" << endl;
	cout << " Х повтор≥ть на ≥нший б≥к" << endl << endl;
	cout << " Х повтор≥ть вправу 30 раз (15+15), чергуючи раз праву ногу, раз л≥ву" << endl;
}

//	friend ostream& operator << (ostream&, const BitString&);

};

