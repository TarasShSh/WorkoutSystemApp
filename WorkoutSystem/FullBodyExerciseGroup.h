#pragma once
#include "ExerciseGroup.h"
class FullBodyExerciseGroup :
    public ExerciseGroup
{
public:

	FullBodyExerciseGroup(const std::string &name, const ExerciseBase* base) : ExerciseGroup(name, base)
	{}

	void ShowSystemInfo() override // �������� ���������� ��� �������
	{
		std::cout << " �� ������� ��������� ����� �'��� ������ ��� �� ������� ���������" << std::endl;
		std::cout << " ���� ������ ����� ��������, �� ��� �� �'��� �� �� ����� ��" << std::endl;
		std::cout << "����������� ������� �����������" << std::endl;
		std::cout << " ����� ���� ������ ����� ���, ��� ���� ������� ���� � ����, �� ��������� �'��� " << std::endl;
		std::cout << " ��������� �� ����'�����" << std::endl;
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

