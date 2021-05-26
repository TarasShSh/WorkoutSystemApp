// Fullbody.h

#pragma once
#include <string>
#include <iostream>
#include "Exercise.h"

using namespace std;

class FullBody // ����� �������
{
private:
	Exercise FB; // ����, ��� ������ �� ������, FB � FullBody
public:
	void MainMenu(); // ������� ����

	void TrainingMenu(); // ����������� ���� (� ���� ������ ������ ������� �� ���������)

	void BetweenMenu(int); // ���� �� ��������

	void AllDone(int); // ���� �� ������ ��������

	void ShowDoneExercises(int); // ������ ������� ������

	void ShowSystemInfo(); // ������ ���������� ��� �������
};