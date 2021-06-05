#pragma once
#include "ExerciseGroup.h"
class PushPullLegsExerciseGroup :
    public ExerciseGroup
{
public:
	PushPullLegsExerciseGroup(const std::string& name, const ExerciseBase* base) : ExerciseGroup(name, base)
	{}

	void ShowSystemInfo() override // �������� ���������� ��� �������
	{
		std::cout << " �� ������� ��������� �������� �� �������� ������� �'��� �� ������� �����������" << std::endl << std::endl;
		std::cout << " ������ ���� ���������� � ����� ���� ���������:" << std::endl;
		std::cout << " Push: ������ � ������, ��� ���� �� ������� ������ �� ����" <<
			std::endl;
		std::cout << " Pull: ������ � ������, ��� ���� �� ������ ������ �� ���� " << std::endl;
		std::cout << " Legs: �� ������ �� �������� ����� ������������ ����" << std::endl <<
			std::endl;
		std::cout << " ���������� ������ ������ ���� �� ���� ������� ������ ���, � ��� ��� �� ���� ������ ����������" << std::endl <<
			" � ���� �������� �� ���������� ����������" << std::endl;
		std::cout << " �� ������� � ��������� ��� ��������� �'��� � �� ����� �� ��������� ��� ������� ����������" << std::endl;
		std::cout << " ������� ���������" << std::endl;
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
		std::cout << " [1] � ������ \"Push\" ����������" << std::endl;
		std::cout << " [2] � ������ \"Pull\" ����������" << std::endl;
		std::cout << " [3] � ������ ���������� ��" << std::endl;
		std::cout << " [0] � ����� � ��������" << std::endl;
		do {
			std::cout << " ������ ���� ��������: "; std::cin >> key;
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
			exit(0); // �������� � ��������
		}
		ShowDoneExercises(done);
		MainMenu();
	}
};

