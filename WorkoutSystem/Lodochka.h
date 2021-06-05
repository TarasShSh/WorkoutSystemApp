// Lodochka.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Lodochka : public Vprava_base
{
public:
	Lodochka(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ����� ����� ������, ���� ��� � ��������, ������� �'��� �����---" <<
			endl << endl;
		cout << " ���������: " << endl;
		cout << " � ����� �� ������ �������� ����" << endl;
		cout << " � �������� ���� ������, � ���� - �����" << endl;
		cout << " � ���������, �������� ������ � �������" << endl;
		cout << " � ������ ����� � ���� ������� �� ����" << endl;
		cout << " � ������������ � ���� ��������� �� ���� ������," << endl
			<< " ����, ��������, ������ ���������� � ��������� ���������" << endl;
		cout << " � �������� ������ 10 ���" << endl
			<< endl;
	}
};

