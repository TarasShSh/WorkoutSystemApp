// PidjomNohy.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class PidjomNohy : public Vprava_base
{
public:
	PidjomNohy(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ������ ������ �� ����� ������" << endl << endl;
		cout << " ���������: " << endl;
		cout << " � ����� �� ������ ��" << endl;
		cout << " � ������� ������ ��� ���� �������� ������, �������� �������" <<
			endl;
		cout << " � ������������ �� ��������, ���� ������� ���� �� ��������� �������"
			<< endl;
		cout << " � ���������, �� ��� ������������ � �� '�����', � ������ ����������"
			<< endl << endl;
		cout << " � �������� ������ 15 ��� �� ������ ��, 15 �� ����" << endl;
    }
};

