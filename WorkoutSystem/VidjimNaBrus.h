// VidjimNaBrus.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class VidjimNaBrus : public Vprava_base
{
public:
    VidjimNaBrus(string name)
    {
        SetName(name);
    }

    void ShowInfo() override
    {
        cout << " ¬ит€гнутими руками в≥зьм≥тьс€ за бруси. “≥ло йде вниз, руки згинаютьс€ в " << endl;
        cout << "л≥кт€х, при цьому, вони повинн≥ бути спр€мован≥ в сторони.–уки розгинаютьс€. " << endl
            << endl;
        cout << " Х повтор≥ть вправу 10 раз" << endl;
    }
};

