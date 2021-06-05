#include "BroSplit.h"
void BroSplit::MainMenu() { // ������� ���� ������
	int key;
	cout << " [1] � ���������� ��� �������" << endl;
	cout << " [2] � ������ ����������" << endl;
	cout << " [0] � ����� � ��������" << endl;
	do {
		cout << " ������ ���� ��������: "; cin >> key;
	} while (key != 1 && key != 2 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		ShowSystemInfo(); // ���������� � �������, ��� �� ���������� ��� �������
		cout << endl;
		MainMenu(); // ϳ��� ��������� ���. ����������� � �� ����
	case 2:
		TrainingMenu(); // ���������� � ����������� ���� (� ��� ������ ������ �� �����)
	case 0:
		exit(0); // �������� � ��������
	}
}
void BroSplit::ShowSystemInfo() { // �������� ���������� ��� �������
	cout << " �� ������� ��������� �������� �� �������� �'��� �� ������� �����������, ��� �� ���������" << endl <<
		" ��������� �� ��������� ������ �'�� ������� ������� ��� � ������ ������" << endl;
	cout << " �� ����� ��� �������, ���� ������� ���� ������� ��������� ���� ���������� ��� ���� �������, " << endl <<
		" �� ���� ������ ������ ������ �� ������ ������������" << endl;
	cout << " г�� �'��� � ������ ��������, ��� �� ����, �� ���� ����������� �� ���," << endl;
	cout << "� ���� ���� � ��� ���" << endl <<
		" ��������, � ������� ������ �� ��������������, � ������� ������� ��������� ����" << endl;
}
void BroSplit::TrainingMenu() { // ����������� ����
	int key;
	cout << " [1] � ������ \"Push\" ����������" << endl;
	cout << " [2] � ������ ���������� ��" << endl;
	cout << " [0] � ����� � ��������" << endl;
	do {
		cout << " ������ ���� ��������: "; cin >> key;
	} while (key != 1 && key != 2 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		PushTraining();
	case 2:
		LegsTraining();
	case 0:
		exit(0); // �������� � ��������
	}
}
void BroSplit::PushTraining()
{
	int counter = 0;
	string training = "Push";
	BS.oneArmGantUp.GetName();
	BS.oneArmGantUp.DoExercise(); // 1
	counter++;
	BetweenMenu(counter, training);
	BS.vidjim.GetName();
	BS.vidjim.DoExercise(); // 2
	counter++;
	BetweenMenu(counter, training);
	BS.obertGantSpina.GetName();
	BS.obertGantSpina.DoExercise(); // 3
	counter++;
	BetweenMenu(counter, training);
	BS.vidjimNaBrus.GetName();
	BS.vidjimNaBrus.DoExercise(); // 4
	counter++;
	AllDone(counter, training);
}
void BroSplit::LegsTraining()
{
	int counter = 0;
	string training = "Legs";
	BS.prysid.GetName();
	BS.prysid.DoExercise(); // 1
	counter++;
	BetweenMenu(counter, training);
	BS.bokVyp.GetName();
	BS.bokVyp.DoExercise(); // 2
	counter++;
	BetweenMenu(counter, training);
	BS.pojejGidr.GetName();
	BS.pojejGidr.DoExercise(); // 3
	counter++;
	BetweenMenu(counter, training);
	BS.stepUps.GetName();
	BS.stepUps.DoExercise(); // 4
	counter++;
	BetweenMenu(counter, training);
	BS.pidjomNohy.GetName();
	BS.pidjomNohy.DoExercise(); // 5
	counter++;
	BetweenMenu(counter, training);
	BS.burpee.GetName();
	BS.burpee.DoExercise(); // 6
	counter++;
	AllDone(counter, training);
}
void BroSplit::BetweenMenu(int counter, string training)
{
	int key;
	cout << " [1] � ������� �� �������� ������" << endl;
	cout << " [0] � ����� � ��������" << endl;
	do {
		cout << " ������ ���� ��������: "; cin >> key;
	} while (key != 1 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		break; // �������� ������
	case 0:
		exit(0); // �������� � ��������
	}
}
void BroSplit::ShowDoneExercisesPush(int counter)
{
	string vpravy[4] = {
	"\"" + BS.oneArmGantUp.GetName() + "\"",
	"\"" + BS.vidjim.GetName() + "\"",
	"\"" + BS.obertGantSpina.GetName() + "\"",
	"\"" + BS.vidjimNaBrus.GetName() + "\""
	};
	if (counter == 1)
		cout << " �� �������� ������ " << vpravy[0] << endl;
	else {
		cout << " �� �������� ��� ������: ";
		for (int i = 0; i < counter; i++) {
			cout << vpravy[i] << "; ";
			if ((i / 5) * 5 == i) // ����������� �� ����� �����, ���� �� ����� ��� � 5 �����
			{
				cout << endl;
			}
		}
		AllDone(counter, "Push");
	}
}
void BroSplit::ShowDoneExercisesLegs(int counter)
{
	string vpravy[6] = {
	"\"" + BS.prysid.GetName() + "\"",
	"\"" + BS.bokVyp.GetName() + "\"",
	"\"" + BS.pojejGidr.GetName() + "\"",
	"\"" + BS.stepUps.GetName() + "\"",
	"\"" + BS.pidjomNohy.GetName() + "\"",
	"\"" + BS.burpee.GetName() + "\""
	};
	if (counter == 1)
		cout << " �� �������� ������ " << vpravy[0] << endl;
	else {
		cout << " �� �������� ��� ������: ";
		for (int i = 0; i < counter; i++) {
			cout << vpravy[i] << "; ";
			if ((i / 5) * 5 == i) // ����������� �� ����� �����, ���� �� ����� ��� � 5 �����
			{
				cout << endl;
			}
		}
		AllDone(counter, "Legs");
	}
}
void BroSplit::AllDone(int counter, string training)
{
	int key;
	cout << " �� �������� �� ������!" << endl;
	cout << " [1] � ������ ��������� �����" << endl;
	cout << " [0] � ����� � ��������" << endl;
	do {
		cout << " ������ ���� ��������:"; cin >> key;
	} while (key != 1 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		ShowNeededExercise(counter, training);
		exit(0);
	case 0:
		exit(0);
	}
}
void BroSplit::ShowNeededExercise(int counter, string training)
{
	if (training == "Push")
		ShowDoneExercisesPush(counter);
	if (training == "Legs")
		ShowDoneExercisesLegs(counter);
}
