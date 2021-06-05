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
		cout << " ���� ���������� �'��� ��, ������� �� ��������� � ���������, ������� �������������" << endl <<
			" �������������; ���������� �������-������� � �������� �������; �������� �'��� �������� ���" << endl
			<< endl;
		cout << " ���������: " << endl;
		cout << " � ���� ������ ����� � ������, ����� �����, ����� � ������ ���������� �����" << endl;
		cout << " � ���� ���������, ���������� � �������, ��� ������� �� ������" <<
			endl;
		cout << " � ��������� �������� ��������� �������, � �� ������" << endl;
		cout << " � ��� �������� ������� ����� �������� ������, ������� ����� ����� ����� �����. " << endl << endl;
		cout << " � �������� ������ 20 ���" << endl;
    }
};

