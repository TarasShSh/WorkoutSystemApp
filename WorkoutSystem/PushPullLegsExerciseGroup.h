#pragma once
#include "ExerciseGroup.h"
class PushPullLegsExerciseGroup :
    public ExerciseGroup
{
public:
	PushPullLegsExerciseGroup(const std::string& name, const ExerciseBase* base) : ExerciseGroup(name, base)
	{}

	void ShowSystemInfo() override // Отримуємо інформацію про систему
	{
		std::cout << " Ця система тренувань націлена на ізоляцію окремих м'язів на окремих тренуваннях" << std::endl << std::endl;
		std::cout << " Всього вона складається з трьох видів тренувань:" << std::endl;
		std::cout << " Push: включає ті вправи, при яких ти штовхаєш знаряд від себе" <<
			std::endl;
		std::cout << " Pull: включає ті вправи, при яких ти тягнеш знаряд на себе " << std::endl;
		std::cout << " Legs: усі вправи які головним чином навантажують ноги" << std::endl <<
			std::endl;
		std::cout << " Тренування включає вправи лише на одну частину вашого тіла, в той час як інші можуть відновитися" << std::endl <<
			" і бути готовими до наступного тренування" << std::endl;
		std::cout << " Ця система є ідеальною для збільшення м'язів і дає змогу за мінімальний час досягти результатів" << std::endl;
		std::cout << " Потребує тренажери" << std::endl;
	}

	void TrainingMenu() override
	{
		std::vector<std::string> push = {
			"ondorykiy_push_gantelya_up",
			"vidjimannya",
			"obert_gant_spina",
			"vidjim_na_brus"
		};

		std::vector<std::string> pull = {
			"stanova_pull",
			"poyas_pull",
			"lodochka",
			"shrug",
			"hyper_extensions"
		};

		std::vector<std::string> legs = {
			"prysidannya",
			"bokovi_vypady",
			"pojej_gidr",
			"step_ups",
			"pidjom_nohy"
		};

		std::vector<std::string> done;
		std::vector<std::string> temp;
		
		int key;
		std::cout << " [1] — Почати \"Push\" тренування" << std::endl;
		std::cout << " [2] — Почати \"Pull\" тренування" << std::endl;
		std::cout << " [3] — Почати тренування ніг" << std::endl;
		std::cout << " [0] — Вийти з програми" << std::endl;
		do {
			std::cout << " Введіть ваше значення: "; std::cin >> key;
		} while (key != 1 && key != 2 && key != 3 && key != 0);
		std::cout << std::endl << std::endl;
		switch (key) {
		case 1:
			temp = DoExercises(push);
			done.insert(done.end(), temp.begin(), temp.end());
		case 2:
			temp = DoExercises(pull);
			done.insert(done.end(), temp.begin(), temp.end());
		case 3:
			temp = DoExercises(legs);
			done.insert(done.end(), temp.begin(), temp.end());
		case 0:
			exit(0); // виходимо з програми
		}
		ShowDoneExercises(done);
		MainMenu();
	}
};

