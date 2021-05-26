//BroSplit.h

#pragma once
#include <string>
#include <iostream>
#include "Exercise.h"

using namespace std;

class BroSplit
{
private:
	Exercise BS; // ����, ��� ������ �� ������, BS - BroSplit
public:
	void MainMenu(); // ������� ����

	void TrainingMenu(); // ����������� ���� (� ���� ������ ������ ������� �� ���������)

	void ShowSystemInfo(); // ������ ���������� ��� �������

	void BetweenMenu(int, string); // ���� �� ��������

	void AllDone(int, string); // ���� �� ������ ��������

	void ShowNeededExercise(int, string); // ��������� �� ������ ��������

	void ShowDoneExercisesPush(int); // ������ ������� ������
	void ShowDoneExercisesLegs(int); // ������ ������� ������

	void PushTraining();
	void LegsTraining();
};
