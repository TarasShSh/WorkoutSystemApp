//PushPullLegs.h

#pragma once
#include <string>
#include <iostream>
#include "Exercise.h"

using namespace std;

class PushPullLegs
{
private:
	Exercise PPL; // поле, яке містить усі вправи, PPL - PushPullLegs
public:

	/*
	void SetPPL(Exercise value) { PPL = value; };
	Exercise GetPPL() { return PPL; };


	PushPullLegs(Exercise PPL)
	{
		SetPPL(PPL);
	}
	*/

	void MainMenu(); // Головне меню

	void TrainingMenu(); // Тренувальне меню

	void ShowSystemInfo(); // Показує інформацію про систему

	void BetweenMenu(int, string); // Меню між вправами

	void AllDone(int, string); // Коли всі вправи зроблено

	void ShowNeededExercise(int, string); // Знаходить які вправи показати

	void ShowDoneExercisesPush(int); // Показує виконані вправи
	void ShowDoneExercisesPull(int); // Показує виконані вправи
	void ShowDoneExercisesLegs(int); // Показує виконані вправи

	void PushTraining();
	void PullTraining();
	void LegsTraining();
};
