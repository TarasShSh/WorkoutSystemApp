#pragma once
#include "ExerciseGroup.h"
class BroSplitExerciseGroup :
    public ExerciseGroup
{
public:
	BroSplitExerciseGroup(const std::string& name, const ExerciseBase* base) : ExerciseGroup(name, base)
	{}

	void ShowSystemInfo() override // �������� ���������� ��� �������
	{
		std::cout << " �� ������� ��������� �������� �� �������� �'��� �� ������� �����������, ��� �� ���������" << std::endl <<
			" ��������� �� ��������� ������ �'�� ������� ������� ��� � ������ ������" << std::endl;
		std::cout << " �� ����� ��� �������, ���� ������� ���� ������� ��������� ���� ���������� ��� ���� �������, " << std::endl <<
			" �� ���� ������ ������ ������ �� ������ ������������" << std::endl;
		std::cout << " г�� �'��� � ������ ��������, ��� �� ����, �� ���� ����������� �� ���," << std::endl;
		std::cout << "� ���� ���� � ��� ���" << std::endl <<
			" ��������, � ������� ������ �� ��������������, � ������� ������� ��������� ����" << std::endl;
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
		std::cout << " [1] � ������ \"Push\" ����������" << std::endl;
		std::cout << " [2] � ������ ���������� ��" << std::endl;
		std::cout << " [0] � ����� � ��������" << std::endl;
		do {
			std::cout << " ������ ���� ��������: "; std::cin >> key;
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
			exit(0); // �������� � ��������
		}
		ShowDoneExercises(done);
		MainMenu();
	}

};

