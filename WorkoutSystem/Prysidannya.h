// Prysidannya.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Prysidannya : public Vprava_base
{
public:
	Prysidannya(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ����������� ������, �������� �� ������ ���� ������ ������� ���" <<
			endl << endl;
		cout << " ���������: " << endl;
		cout << " � �������� ���� ����� ����� �� ������ ������" << endl;
		cout << " � �������� ���� ����� ����� ��� �������" << endl;
		cout << " � �������� ����� ����� � �����������, ���� ������ �� �������� �������� � �������" << endl;
		cout << " � ����� �� ����� ��������� �� ������ ��" << endl;
		cout << " � �������� � ���������� � ������� ���������" << endl << endl;
		cout << " � �������� ������ 20 ���" << endl;
    }
};

