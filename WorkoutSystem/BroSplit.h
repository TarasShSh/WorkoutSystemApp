//BroSplit.h

#pragma once
#include <string>
#include <iostream>
#include "Exercise.h"

using namespace std;

class BroSplit
{
private:
	Exercise BS; // поле, яке містить усі вправи, BS - BroSplit
public:
	void MainMenu(); // Головне меню

	void TrainingMenu(); // Тренувальне меню (в даній системі одразу перехід до тренувань)

	void ShowSystemInfo(); // Показує інформацію про систему

	void BetweenMenu(int, string); // Меню між вправами

	void AllDone(int, string); // Коли всі вправи зроблено

	void ShowNeededExercise(int, string); // Знаходить які вправи показати

	void ShowDoneExercisesPush(int); // Показує виконані вправи
	void ShowDoneExercisesLegs(int); // Показує виконані вправи

	void PushTraining();
	void LegsTraining();
};
