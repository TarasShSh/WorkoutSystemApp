// Vidjimannya.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Vidjimannya : public Vprava_base
{
public:
	Vidjimannya(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ³�������� - ���������� � �������� ������, ��� � ��� �� ��� ����" << endl;
		cout << "���������.���������� ���� ������� � ����� ����� : ������� �����, ����� �������� ��" << endl;
		cout << "��� ������, ��� � ������ ������ ��������������� ���������� �����; " << endl;
		cout << "�������� ��� � ����������� �� ������ " << endl << endl;
		cout << " � �������� ������ 20 ���" << endl;
    }
};

