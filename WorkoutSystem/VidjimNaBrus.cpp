#include "VidjimNaBrus.h"
void VidjimNaBrus::DoExercise() { // ������ ������
	SetName("��������� �� ������"); // <- ������� ����� ������
	cout << " �� ������ ������ " << name << endl;
	int key;
	cout << " [1] � �� ���������� ������" << endl;
	cout << " [2] � ��������� ��������� ������" << endl;
	cout << " [0] � ����� � ��������" << endl;
	do {
		cout << " ������ ���� ��������:"; cin >> key;
	} while (key != 1 && key != 2 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		ShowInfo(); // �������� ���. ��� ������ � ����������� �� ����� ����
		DoExercise();
	case 2:
		break; // ���������� ��������� ���� ������
	case 0:
		exit(0); // �������� � ��������
	}
}
void VidjimNaBrus::ShowInfo() { // �������� ��� ������
	cout << " ����������� ������ �������� �� �����. ҳ�� ��� ����, ���� ���������� � "<< endl;
	cout << "�����, ��� �����, ���� ������ ���� ��������� � �������.���� ������������. " << endl
		<< endl;
	cout << " � �������� ������ 10 ���" << endl;
}
