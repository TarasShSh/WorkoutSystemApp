// OndorykiyPushGantelyaUp.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class OndorykiyPushGantelyaUp : public Vprava_base
{
public:
	OndorykiyPushGantelyaUp(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ���������: " << endl << endl;
		cout << " ������ �� ���� ����� ������� � �� ������ ������ �� �� �������� �����." << endl
			<< "��� ������ ������� ���������� ��������� �� �����������." << endl
			<< "��������� 8 - 10 ��������� �� �������� �����," << endl
			<< " � ���� ��������� ���� � ������� ��������� � ��������� ����� �� ������ ��������� �����." << endl;
		cout << " � �������� ������ 15 ��� �� ����� ����, 15 �� ���---" << endl;
    }
};

