#pragma once
#include "ExerciseGroup.h"
class FullBodyExerciseGroup :
    public ExerciseGroup
{
public:

	FullBodyExerciseGroup(const std::string &name, const ExerciseBase* base) : ExerciseGroup(name, base)
	{}

	void ShowSystemInfo() override // Отримуємо інформацію про систему
	{
		std::cout << " Ця система тренувань задіює м'язи всього тіла на кожному тренуванні" << std::endl;
		std::cout << " Вона чудово підійде новачкам, чиє тіло та м'язи ще не готові до" << std::endl;
		std::cout << "інтенсивних силових навантажень" << std::endl;
		std::cout << " Також вона чудово підійде тим, хто хоче тримати себе у формі, не нарощуючи м'язи " << std::endl;
		std::cout << " Тренажери не обов'язкові" << std::endl;
	}

	void TrainingMenu() override
	{
		std::vector<std::string> e = {
			"skakalka_jump",
			"vidjimannya",
			"ondorykiy_push_gantelya_up",
			"obert_gant_spina",
			"lodochka",
			"stanova_pull",
			"hyper_extensions",
			"prysidannya",
			"pojej_gidr",
			"burpee"
		};

		std::vector<std::string> done = DoExercises(e);
		ShowDoneExercises(done);
		MainMenu();
	}
};

