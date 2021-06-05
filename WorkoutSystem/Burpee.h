// Burpee.h
#include "Vprava_base.h"

#pragma once
#include <string>
#include <iostream>

using namespace std;

class Burpee : public Vprava_base
{
public:

	Burpee(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ¬права зад≥юЇ вс≥ велик≥ мТ€зов≥ групи т≥ла, а максимальне навантаженн€ отримують прес, ноги, " << endl <<
			" груди ≥ верх спини; вправа розвиваЇ не т≥льки витривал≥сть, а також силу	≥ координац≥ю рух≥в-- - " << endl << endl;
		cout << " ¬иконанн€: " << endl;
		cout << " Х з положенн€ сто€чи, прис≥сти ≥ покласти обидв≥ долон≥ на п≥длогу перед собою" << endl;
		cout << " Х у стрибку вит€гнути ноги ≥ зайн€ти позиц≥ю планки" << endl;
		cout << " Х у стрибку знову зайн€ти вих≥дну позиц≥ю" << endl;
		cout << " Х встати у вих≥дне положенн€" << endl << endl;
		cout << " Х повтор≥ть вправу 10 раз" << endl;
	}

};

