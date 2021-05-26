#include "FullBody.h"
#include <iostream>
using namespace std;
void FullBody::MainMenu() { // ������� ���� ������
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
void FullBody::ShowSystemInfo() { // �������� ���������� ��� �������
		cout << " �� ������� ��������� ����� �'��� ������ ��� �� ������� ���������" << endl;
		cout << " ���� ������ ����� ��������, �� ��� �� �'��� �� �� ����� ��" << endl;
		cout << "����������� ������� �����������" << endl;
		cout << " ����� ���� ������ ����� ���, ��� ���� ������� ���� � ����, �� ��������� �'��� " << endl;
		cout << " ��������� �� ����'�����" << endl;
}
void FullBody::TrainingMenu() { // ����������� ����
	int counter = 0;
	FB.skakalka.DoExercise(); // 1
	counter++;
	BetweenMenu(counter);
	FB.vidjim.DoExercise(); // 2
	counter++;
	BetweenMenu(counter);
	FB.oneArmGantUp.DoExercise(); // 3
	counter++;
	BetweenMenu(counter);
	FB.obertGantSpina.DoExercise(); // 4
	counter++;
	BetweenMenu(counter);
	FB.lodochka.DoExercise(); // 5
	counter++;
	BetweenMenu(counter);
	FB.stanovaPull.DoExercise(); // 6
	counter++;
	BetweenMenu(counter);
	FB.hyperExt.DoExercise(); // 7
	counter++;
	BetweenMenu(counter);
	FB.prysid.DoExercise(); // 8
	counter++;
	BetweenMenu(counter);
	FB.pojejGidr.DoExercise(); // 9
	counter++;
	BetweenMenu(counter);
	FB.burpee.DoExercise(); // 10
	counter++;
	AllDone(counter); // �� ������ ��������
}
void FullBody::BetweenMenu(int counter)
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
		break;
	case 0:
		exit(0); // �������� � ��������
	}
}
void FullBody::ShowDoneExercises(int counter)
{
	string vpravy[10] = {
	"\"" + FB.skakalka.GetName() + "\"",
	"\"" + FB.vidjim.GetName() + "\"",
	"\"" + FB.oneArmGantUp.GetName() + "\"",
	"\"" + FB.obertGantSpina.GetName() + "\"",
	"\"" + FB.lodochka.GetName() + "\"",
	"\"" + FB.stanovaPull.GetName() + "\"",
	"\"" + FB.hyperExt.GetName() + "\"",
	"\"" + FB.prysid.GetName() + "\"",
	"\"" + FB.pojejGidr.GetName() + "\"",
	"\"" + FB.burpee.GetName() + "\"",
	};
	if (counter == 1)
		cout << " �� �������� ������ " << vpravy[0] << endl;
	else {
		cout << " �� �������� ��� ������: ";
		for (int i = 0; i < counter; i++) {
			cout << vpravy[i] << "; ";
		}
	}
}
void FullBody::AllDone(int counter)
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
		ShowDoneExercises(counter);
	case 0:
		exit(0);
	}
}
