// ObertGantSpina.h

#pragma once
#include <string>
#include <iostream>

using namespace std;

class ObertGantSpina // ����� �����-������
{
private:
    string name; // ����� ������
public:
    void SetName(string value) { name = value; };
    string GetName() { return name; };

    void DoExercise(); // ������ ������

    void ShowInfo(); // ���������� ��� ������
};

