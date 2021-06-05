//PushPullLegs.h

#pragma once
#include <string>
#include <iostream>
#include "Exercise.h"

using namespace std;

class PushPullLegs
{
private:
	Exercise PPL; // ����, ��� ������ �� ������, PPL - PushPullLegs
public:

	/*
	void SetPPL(Exercise value) { PPL = value; };
	Exercise GetPPL() { return PPL; };


	PushPullLegs(Exercise PPL)
	{
		SetPPL(PPL);
	}
	*/

	void MainMenu(); // ������� ����

	void TrainingMenu(); // ����������� ����

	void ShowSystemInfo(); // ������ ���������� ��� �������

	void BetweenMenu(int, string); // ���� �� ��������

	void AllDone(int, string); // ���� �� ������ ��������

	void ShowNeededExercise(int, string); // ��������� �� ������ ��������

	void ShowDoneExercisesPush(int); // ������ ������� ������
	void ShowDoneExercisesPull(int); // ������ ������� ������
	void ShowDoneExercisesLegs(int); // ������ ������� ������

	void PushTraining();
	void PullTraining();
	void LegsTraining();
};
