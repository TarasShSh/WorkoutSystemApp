// SkakalkaJump.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class SkakalkaJump : public Vprava_base
{
public:
	SkakalkaJump(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ¬они розвивають м'€зи н≥г, робл€ть њх стрункими ≥ красивими, служать проф≥лактикою" << endl <<
			" плоскостопост≥; розвивають серцево-судинну ≥ дихальну системи; зм≥цнюють м'€зи тазового дна" << endl
			<< endl;
		cout << " ¬иконанн€: " << endl;
		cout << " Х ноги злегка з≥гнут≥ в кол≥нах, ступн≥ разом, тулуб ≥ голова розташован≥ пр€мо" << endl;
		cout << " Х руки розгорнут≥, передпл≥чч€ в сторони, л≥кт≥ близько до тулуба" <<
			endl;
		cout << " Х обертанн€ скакалки зд≥йснюйте кист€ми, а не руками" << endl;
		cout << " Х ѕри виконанн≥ стрибк≥в тулуб тримайте пр€мим, див≥тьс€ треба пр€мо перед собою. " << endl << endl;
		cout << " Х повтор≥ть вправу 20 раз" << endl;
    }
};

