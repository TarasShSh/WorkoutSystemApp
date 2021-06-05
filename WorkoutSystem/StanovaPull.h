// StanovaPull.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class StanovaPull : public Vprava_base
{
public:
	StanovaPull(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << "---������ ��� �������� �'��� ��������, �� �������� � ���������� ����� ����������� ����---" << endl << endl;

		cout << "���������: " << endl;
		cout << "�  �������� ����� ����� ������� ��� ������" << endl;
		cout << "�  � �������� ������ �������� � �����������, �� ��������� ����" << endl;
		cout << "�  ����� ������ ���� ������� �����, � ������� ������" << endl << endl;

		cout << "�  ---�������� ������ 10 ���---" << endl;
    }
};

