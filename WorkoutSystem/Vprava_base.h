// Vprava_base.h

#pragma once
#include <string>
#include <iostream>

using namespace std;

class Vprava_base // ����� �����-������
{
private:
    string name; // ����� ������
public:
    void SetName(string value) { name = value; };
    string GetName() { return name; };

    void DoExercise(); // ������ ������

    virtual void ShowInfo() = 0;
};

