// ObertGantSpina.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class ObertGantSpina : public Vprava_base
{
public:
	ObertGantSpina(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
    {
		cout << " ��� ���� ������ ����� ������� ����� �������. ����� �� ����� �� ����, ������ �� ���������� �������." << endl;
		cout << "���������� ���� ���, ��� ����� ��������� ������ ��� � ��� " << endl;
		cout << "�� ���� �� � ������, � ������� � �� ���.�� ������ ����� ����� ���������� ������ �� �����." << endl;
		cout << "��������� 8 - 10 ��������� �� �������� �����, � ���� � ���� � �������" << endl;
		cout << "��������� � ��������� ����� �� ������ ��������� �����. " << endl << endl;
		cout << " � �������� ������ 15 ��� �� ����� ����, 15 �� ���" << endl;
    }
};

