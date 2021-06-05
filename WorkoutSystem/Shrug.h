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
		cout << " ������ ��� �������� ������� ������� ���������������� �'���---" << endl
			<< endl;
		cout << " ���������: " << endl;
		cout << " � ������ � ����� ���� (�������, ��� �� ������) ������" << endl;
		cout << " � ��������-��������� ����� � ���� ��������� � �����" << endl;
		cout << " � ����� ������ ���� ������� �����, � ������� ������" << endl <<
			endl;
		cout << " � ---�������� ������ 20 ���---" << endl;
    }
};

