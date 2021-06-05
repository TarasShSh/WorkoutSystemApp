// Fullbody.h

#pragma once
#include <string>
#include <iostream>
#include "Exercise.h"

using namespace std;

class FullBody // назва системи
{
private:
	Exercise FB; // поле, яке містить усі вправи, FB — FullBody
public:
	/*
	void SetFB(Exercise value) { FB = value; };
	Exercise GetFB() { return FB; };


	FullBody(Exercise FB)
	{
		SetFB(FB);
	}
	*/
	void MainMenu(); // Головне меню

	void TrainingMenu(); // Тренувальне меню (в даній системі одразу перехід до тренувань)

	void BetweenMenu(int); // Меню між вправами

	void AllDone(int); // Коли всі вправи зроблено

	void ShowDoneExercises(int); // Показує виконані вправи

	void ShowSystemInfo(); // Показує інформацію про систему
};