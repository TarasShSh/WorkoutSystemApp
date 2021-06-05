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
		std::cout << " [1] � ���������� ��� �������" << std::endl;
		std::cout << " [2] � ������� �� ����������" << std::endl;
		std::cout << " [0] � ����� � ��������" << std::endl;
		do {
			std::cout << " ������ ���� ��������: "; std::cin >> key;
		} while (key != 1 && key != 2 && key != 0);
		std::cout << std::endl << std::endl;
		switch (key) {
		case 1:
			ShowSystemInfo(); // ���������� � �������, ��� �� ���������� ��� �������
			std::cout << std::endl;
			MainMenu(); // ϳ��� ��������� ���. ����������� � �� ����
		case 2:
			TrainingMenu(); // ���������� � ����������� ����
		case 0:
			exit(0); // �������� � ��������
		}
	}
	// ���� �� ��������
	void BetweenMenu()
	{
		int key;
		std::cout << " [1] � ������� �� �������� ������" << std::endl;
		std::cout << " [0] � ����� � ��������" << std::endl;
		do {
			std::cout << " ������ ���� ��������: "; std::cin >> key;
		} while (key != 1 && key != 0);
		std::cout << std::endl << std::endl;
		switch (key) {
		case 1:
			break; // �������� ������
		case 0:
			exit(0); // �������� � ��������
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
			std::cout << " �� �������� ������ " << _base->GetExercise(e[0])->GetName() << std::endl;
		else {
			std::cout << " �� �������� ��� ������: ";
			for (int i = 0; i < e.size(); i++) {
				std::cout << _base->GetExercise(e[i])->GetName() << "; ";
				if ((i / 5) * 5 == i) // ����������� �� ����� �����, ���� �� ����� ��� � 5 �����
					std::cout << std::endl;
			}
		}
	}

	virtual void TrainingMenu() = 0;
	virtual void ShowSystemInfo() = 0;
};

