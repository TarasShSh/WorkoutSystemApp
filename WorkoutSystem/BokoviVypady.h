// BokoviVypady.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class BokoviVypady : public Vprava_base
{
public:

	//operator string() const override;



	BokoviVypady(string name)
	{
		SetName(name);
	}

    void ShowInfo() override
	{
		cout << " ������, ����������� ����� �� ������� ������ ������ �� ������" <<
		endl << endl;
	cout << " ���������: " << endl;
	cout << " � �������� ���� ����� ����� �� ������ ������, ������ ������, ��� ��������� �����" << endl;
	cout << " � ����� ������� ���� ������ � ��������" << endl;
	cout << " � ��������� ��� ����, ���� ����� ������ �� ������� �������� � �������" << endl;
	cout << " � ���������, ������������ ���� ����� � ���������� �� ��������� �������" << endl;
	cout << " � �������� �� ����� ��" << endl << endl;
	cout << " � �������� ������ 30 ��� (15+15), �������� ��� ����� ����, ��� ���" << endl;
}

//	friend ostream& operator << (ostream&, const BitString&);

};

