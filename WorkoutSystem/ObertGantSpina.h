// ObertGantSpina.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class ObertGantSpina : public Vprava_base
{
public:
	ObertGantSpina(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " Для цієї вправи краще обирати легку гантель. Ляжте на спину на лаву, плечем не торкаючись поверхні." << endl;
		cout << "Розташуйте руку так, щоб лікоть утворював прямий кут й був " << endl;
		cout << "на одній лінії з плечем, а зап’ястя – на лікті.Цю вправу також можна виконувати лежачи на підлозі." << endl;
		cout << "Виконайте 8 - 10 повторень на слабшому плечі, а потім – таку ж кількість" << endl;
		cout << "повторень з однаковою вагою на вашому сильнішому плечі. " << endl << endl;
		cout << " • повторіть вправу 15 раз на праву руку, 15 на ліву" << endl;
    }
};

