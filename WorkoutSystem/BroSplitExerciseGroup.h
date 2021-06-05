#pragma once
#include "ExerciseGroup.h"
class BroSplitExerciseGroup :
    public ExerciseGroup
{
public:
	BroSplitExerciseGroup(const std::string& name, const ExerciseBase* base) : ExerciseGroup(name, base)
	{}

	void ShowSystemInfo() override // Отримуємо інформацію про систему
	{
		std::cout << " Ця система тренувань націлена на ізоляцію м'язів на окремих тренуваннях, але на поточному" << std::endl <<
			" тренуванні ви прокачуєте якийсь м'яз верхньої частини тіла і якийсь нижньої" << std::endl;
		std::cout << " Не підійде для новачків, адже потрібно мати фізичну підготовку вище середнього для цієї системи, " << std::endl <<
			" бо вона містить складні вправи та велике навантаження" << std::endl;
		std::cout << " Ріст м'язів є досить повільним, але це тому, що вона розрахована на тих," << std::endl;
		std::cout << "у кого вони і так вже" << std::endl <<
			" прокачані, і потрібно просто їх вдосконалювати, а звичайні системи вжеанадто легкі" << std::endl;
	}

	void TrainingMenu() override
	{
		std::vector<std::string> push = {
			"ondorykiy_push_gantelya_up",
			"vidjimannya",
			"obert_gant_spina",
			"vidjim_na_brus"
		};

		std::vector<std::string> legs = {
			"prysidannya",
			"bokovi_vypady",
			"pojej_gidr",
			"step_ups",
			"pidjom_nohy",
			"burpee"
		};

		std::vector<std::string> done;
		std::vector<std::string> temp;

		int key;
		std::cout << " [1] — Почати \"Push\" тренування" << std::endl;
		std::cout << " [2] — Почати тренування ніг" << std::endl;
		std::cout << " [0] — Вийти з програми" << std::endl;
		do {
			std::cout << " Введіть ваше значення: "; std::cin >> key;
		} while (key != 1 && key != 2 && key != 0);
		std::cout << std::endl << std::endl;
		switch (key) {
		case 1:
			temp = DoExercises(push);
			done.insert(done.end(), temp.begin(), temp.end());
		case 2:
			temp = DoExercises(legs);
			done.insert(done.end(), temp.begin(), temp.end());
		case 0:
			exit(0); // виходимо з програми
		}
		ShowDoneExercises(done);
		MainMenu();
	}

};

