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
		cout << " ������ ����� �� ����� ����� ����� ���, � ����������� ������������ ��������� ����, ����, " << endl <<
			" ����� � ���� �����; ������ ������� �� ����� �����������, � ����� ����	� ����������� �����-- - " << endl << endl;
		cout << " ���������: " << endl;
		cout << " � � ��������� ������, ������� � �������� ����� ����� �� ������ ����� �����" << endl;
		cout << " � � ������� ��������� ���� � ������� ������� ������" << endl;
		cout << " � � ������� ����� ������� ������� �������" << endl;
		cout << " � ������ � ������� ���������" << endl << endl;
		cout << " � �������� ������ 10 ���" << endl;
	}

};

