#pragma once
#include <string>
#include <vector>
#include <iostream>

#include "ExerciseBase.h"
class ExerciseGroup abstract
{
protected:
	std::string _name;
	const ExerciseBase* _base;
public: 

	ExerciseGroup(const std::string &name, const ExerciseBase* base) :_name(name), _base(base)
	{}

	std::string GetName() const { return _name; }

	void MainMenu()
	{
		int key;
		std::cout << " [1] Ч ≤нформац≥€ про систему" << std::endl;
		std::cout << " [2] Ч ѕерейти до тренуванн€" << std::endl;
		std::cout << " [0] Ч ¬ийти з програми" << std::endl;
		do {
			std::cout << " ¬вед≥ть ваше значенн€: "; std::cin >> key;
		} while (key != 1 && key != 2 && key != 0);
		std::cout << std::endl << std::endl;
		switch (key) {
		case 1:
			ShowSystemInfo(); // ѕереходимо в функц≥ю, €ка даЇ ≥нформац≥ю про систему
			std::cout << std::endl;
			MainMenu(); // ѕ≥сл€ отриманн€ ≥нф. повертаЇмось в це меню
		case 2:
			TrainingMenu(); // переходимо в тренувальне меню
		case 0:
			exit(0); // виходимо з програми
		}
	}
	// ћеню м≥ж вправами
	void BetweenMenu()
	{
		int key;
		std::cout << " [1] Ч ѕерейти до наступноњ вправи" << std::endl;
		std::cout << " [0] Ч ¬ийти з програми" << std::endl;
		do {
			std::cout << " ¬вед≥ть ваше значенн€: "; std::cin >> key;
		} while (key != 1 && key != 0);
		std::cout << std::endl << std::endl;
		switch (key) {
		case 1:
			break; // наступна вправа
		case 0:
			exit(0); // виходимо з програми
		}
	}

	std::vector<std::string> DoExercises(const std::vector<std::string>& exercises)
	{
		std::vector<std::string> done;
		for (size_t i = 0; i < exercises.size(); i++)
		{
			const Exercise* eex = _base->GetExercise(exercises[i]);
			if (eex != nullptr)
			{
				done.push_back(exercises[i]);
				eex->Do();
				if (i + 1 < exercises.size())
					BetweenMenu();
			}
		}
		return done;
	}

	void ShowDoneExercises(const std::vector<std::string>& e)
	{
		if (e.size() == 1)
			std::cout << " ¬и виконали вправу " << _base->GetExercise(e[0])->GetName() << std::endl;
		else {
			std::cout << " ¬и виконали так≥ вправи: ";
			for (int i = 0; i < e.size(); i++) {
				std::cout << _base->GetExercise(e[i])->GetName() << "; ";
				if ((i / 5) * 5 == i) // перенесенн€ на новий р€док, €кщо на екран≥ вже Ї 5 вправ
					std::cout << std::endl;
			}
		}
	}

	virtual void TrainingMenu() = 0;
	virtual void ShowSystemInfo() = 0;
};

