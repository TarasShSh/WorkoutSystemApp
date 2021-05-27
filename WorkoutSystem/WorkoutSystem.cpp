// WorkoutSystem.cpp
#include "WorkoutSystem.h"

void WorkoutSystem::EnterValues()
{
cout << " ������ �� ������ ���:" << endl << endl;
{ // ������� �����
	int key;
	cout << " ������ ���� �����:" << endl;
	cout << " [1] � ������" << endl;
	cout << " [2] � Ƴ���" << endl;
	do {
		cout << " ������ ���� ��������: "; cin >> key;
	} while (key != 1 && key != 2);

	cout << endl << endl;

	if (key == 1) // �������� ����� � ���� gender
		gender = "male";
	else if (key == 2)
		gender = "female";
}

{ // ������� ����
	int key;
	cout << " ������ ���� ����� ���������:" << endl;
	cout << " [1] � ���� �'���" << endl;
	cout << " [2] � �������� ����" << endl;
	do {
		cout << " ������ ���� ��������: "; cin >> key;
	} while (key != 1 && key != 2);

	cout << endl << endl;

	if (key == 1) // �������� ���� � ���� meta 
		meta = "Muscles";
	else if (key == 2)
		meta = "WeightLoss";
}

{ // ������� ������� �����
	int key;
	cout << " ������ � ��� ������� ���� �� �����������" << endl;
	cout << " [1] � ������" << endl;
	cout << " [2] � �������" << endl;
	cout << " [3] � ������" << endl;
	do {
		cout << " ������ ���� ��������: "; cin >> key;
	} while (key != 1 && key != 2 && key != 3);

	cout << endl;

	if (key == 1) // �������� ������� ����� � ���� forma 
		forma = "New";
	else if (key == 2)
		forma = "Average";
	else if (key == 3)
		forma = "Athlet";
}
	}

string WorkoutSystem::ReturnTheBestSystem()
{
		if (meta == "WeightLoss") { // ���� ���� � ���������
			if (forma == "New" || forma == "Average") // � ����� �� �����
				return "Fullbody"; // �������� ������� ������
			else if (forma == "Athlet") // ���� ����� �����
				return "Push Pull Legs"; // �������� ������� PPL
		}

		else if (meta == "Muscles") { // ���� ���� ���� �'���,
			if (forma == "New") // �� ����� ���� ������� ������ �������
				return "Fullbody";
			else if (forma == "Average")
				return "Push Pull Legs";
			else if (forma == "Athlet")
				return "Bro-split";
		}
		return "null";
}

void WorkoutSystem::RunBestSystem()
{
		if (ReturnTheBestSystem() == "Fullbody")
			FB.MainMenu(); // ������� �� ���� ������� ������
		else if (ReturnTheBestSystem() == "Push Pull Legs")
			PPL.MainMenu(); // ������� �� ���� ������� PPL
		else if (ReturnTheBestSystem() == "Bro-split")
			BS.MainMenu(); // ������� �� ���� ������� Bro-split
}
