// StepUps.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class StepUps : public Vprava_base
{
public:
	StepUps(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ������ ������ � ������ ������ ������ �� ������, ������� ���� ��������" << endl << endl;
		cout << " ���������: " << endl;
		cout << " � ������� �� ������� ������ �����, ������ ��� ����� �����, ��������� ������ �� �����" << endl;
		cout << " � ������� ��� ����, ����� � ����� �� ������ �������������" << endl
			<< endl;
		cout << " � �������� 2 ������ (15 �� ����� ����, 15 �� ���)" << endl;
    }
};

