#include "PushPullLegs.h"
void PushPullLegs::MainMenu() { // ������� ���� PPL
	int key;
	cout << " [1] � ���������� ��� �������" << endl;
	cout << " [2] � ������� �� ����������" << endl;
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
		TrainingMenu(); // ���������� � ����������� ����
	case 0:
		exit(0); // �������� � ��������
	}
}
void PushPullLegs::ShowSystemInfo() { // �������� ���������� ��� �������
	cout << " �� ������� ��������� �������� �� �������� ������� �'��� �� ������� �����������" << endl << endl;
		cout << " ������ ���� ���������� � ����� ���� ���������:" << endl;
	cout << " Push: ������ � ������, ��� ���� �� ������� ������ �� ����" <<
		endl;
	cout << " Pull: ������ � ������, ��� ���� �� ������ ������ �� ���� " << endl;
	cout << " Legs: �� ������ �� �������� ����� ������������ ����" << endl <<
		endl;
	cout << " ���������� ������ ������ ���� �� ���� ������� ������ ���, � ��� ��� �� ���� ������ ����������" << endl <<
		" � ���� �������� �� ���������� ����������" << endl;
	cout << " �� ������� � ��������� ��� ��������� �'��� � �� ����� �� ��������� ��� ������� ����������" << endl;
		cout << " ������� ���������" << endl;
}
void PushPullLegs::TrainingMenu() { // ����������� ����
	int key;
	cout << " [1] � ������ \"Push\" ����������" << endl;
	cout << " [2] � ������ \"Pull\" ����������" << endl;
	cout << " [3] � ������ ���������� ��" << endl;
	cout << " [0] � ����� � ��������" << endl;
	do {
		cout << " ������ ���� ��������: "; cin >> key;
	} while (key != 1 && key != 2 && key != 3 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		PushTraining();
	case 2:
		PullTraining();
	case 3:
		LegsTraining();
	case 0:
		exit(0); // �������� � ��������
	}
}
void PushPullLegs::PushTraining()
{
	int counter = 0;
	string training = "Push";
	PPL.oneArmGantUp.GetName();
	PPL.oneArmGantUp.DoExercise(); // 1
	counter++;
	BetweenMenu(counter, training);
	PPL.vidjim.GetName();
	PPL.vidjim.DoExercise(); // 2
	counter++;
	BetweenMenu(counter, training);
	PPL.obertGantSpina.GetName();
	PPL.obertGantSpina.DoExercise(); // 3
	counter++;
	BetweenMenu(counter, training);
	PPL.vidjimNaBrus.GetName();
	PPL.vidjimNaBrus.DoExercise(); // 4
	counter++;
	AllDone(counter, training);
}
void PushPullLegs::PullTraining()
{
	int counter = 0;
	string training = "Pull";
	PPL.stanovaPull.GetName();
	PPL.stanovaPull.DoExercise(); // 1
	counter++;
	BetweenMenu(counter, training);
	PPL.poyasPull.GetName();
	PPL.poyasPull.DoExercise(); // 2
	counter++;
	BetweenMenu(counter, training);
	PPL.lodochka.GetName();
	PPL.lodochka.DoExercise(); // 3
	counter++;
	BetweenMenu(counter, training);
	PPL.shrug.GetName();
	PPL.shrug.DoExercise(); // 4
	counter++;
	BetweenMenu(counter, training);
	PPL.hyperExt.GetName();
	PPL.hyperExt.DoExercise(); // 5
	counter++;
	AllDone(counter, training);
}

void PushPullLegs::LegsTraining()
{
	int counter = 0;
	string training = "Legs";
	PPL.prysid.GetName();
	PPL.prysid.DoExercise(); // 1
	counter++;
	BetweenMenu(counter, training);
	PPL.bokVyp.GetName();
	PPL.bokVyp.DoExercise(); // 2
	counter++;
	BetweenMenu(counter, training);
	PPL.pojejGidr.GetName();
	PPL.pojejGidr.DoExercise(); // 3
	counter++;
	BetweenMenu(counter, training);
	PPL.stepUps.GetName();
	PPL.stepUps.DoExercise(); // 4
	counter++;
	BetweenMenu(counter, training);
	PPL.pidjomNohy.GetName();
	PPL.pidjomNohy.DoExercise(); // 5
	counter++;
	AllDone(counter, training);
}
void PushPullLegs::BetweenMenu(int counter, string training)
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
void PushPullLegs::ShowDoneExercisesPush(int counter)
{
	string vpravy[4] = {
	"\"" + PPL.oneArmGantUp.GetName() + "\"",
	"\"" + PPL.vidjim.GetName() + "\"",
	"\"" + PPL.obertGantSpina.GetName() + "\"",
	"\"" + PPL.vidjimNaBrus.GetName() + "\""
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
void PushPullLegs::ShowDoneExercisesPull(int counter)
{
	string vpravy[5] = {
	"\"" + PPL.stanovaPull.GetName() + "\"",
	"\"" + PPL.poyasPull.GetName() + "\"",
	"\"" + PPL.lodochka.GetName() + "\"",
	"\"" + PPL.shrug.GetName() + "\"",
	"\"" + PPL.hyperExt.GetName() + "\"",
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
		AllDone(counter, "Pull");
	}
}
void PushPullLegs::ShowDoneExercisesLegs(int counter)
{
	string vpravy[5] = {
	"\"" + PPL.prysid.GetName() + "\"",
	"\"" + PPL.bokVyp.GetName() + "\"",
	"\"" + PPL.pojejGidr.GetName() + "\"",
	"\"" + PPL.stepUps.GetName() + "\"",
	"\"" + PPL.pidjomNohy.GetName() + "\""
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
void PushPullLegs::AllDone(int counter, string training)
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
void PushPullLegs::ShowNeededExercise(int counter, string training)
{
	if (training == "Push")
		ShowDoneExercisesPush(counter);
	if (training == "Pull")
		ShowDoneExercisesPull(counter);
	if (training == "Legs")
		ShowDoneExercisesLegs(counter);
}
