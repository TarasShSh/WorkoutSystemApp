// VidjimNaBrus.h
#include "Vprava_base.h"
#pragma once
#include <string>
#include <iostream>

using namespace std;

class VidjimNaBrus : public Vprava_base
{
public:
    VidjimNaBrus(string name)
    {
        SetName(name);
    }

    void ShowInfo() override
    {
        cout << " ����������� ������ �������� �� �����. ҳ�� ��� ����, ���� ���������� � " << endl;
        cout << "�����, ��� �����, ���� ������ ���� ��������� � �������.���� ������������. " << endl
            << endl;
        cout << " � �������� ������ 10 ���" << endl;
    }
};

