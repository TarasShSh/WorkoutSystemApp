// Source.cpp

#include <iostream>
#include "Windows.h"
#include "WorkoutSystem.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251); // ϳ�������
	SetConsoleCP(1251);      // ��������
	WorkoutSystem ws;
	cout << " ³���� � ������� ��� ������ ���������! " << endl << endl;

	 // ������� ����
		int key;
		cout << " [1] � ������ ���� ������� ����������" << endl;
		cout << " [0] � ����� � ��������" << endl;
		do {
			cout << " ������ ���� ��������: "; cin >> key;
		} while (key != 0 && key != 1);
		cout << endl << endl;

		switch (key) {
		case 0:
			exit(0); // ����� � ��������
		case 1:
			ws.EnterValues(); // ���������� �� ������� ������� �������
		}
	
	cout << " ��� ���� ������� ������� \"" << ws.ReturnTheBestSystem() << "\"" 
		<< endl << endl; // �������� ������������ ������ ���� �������
	ws.RunBestSystem();
	return 0;
}