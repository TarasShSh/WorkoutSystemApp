// Source.cpp

#include <iostream>
#include "Windows.h"
#include "WorkoutSystem.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251); // Підтримка
	SetConsoleCP(1251);      // кирилиці
	WorkoutSystem ws;
	cout << " Вітаємо у програмі для підбору тренувань! " << endl << endl;

	 // Головне меню
		int key;
		cout << " [1] — Почати підбір системи тренування" << endl;
		cout << " [0] — Вийти з програми" << endl;
		do {
			cout << " Введіть ваше значення: "; cin >> key;
		} while (key != 0 && key != 1);
		cout << endl << endl;

		switch (key) {
		case 0:
			exit(0); // вихід з програми
		case 1:
			ws.EnterValues(); // переходимо до функції введеня значень
		}
	
	cout << " Вам було підібрано систему \"" << ws.ReturnTheBestSystem() << "\"" 
		<< endl << endl; // Виводить користувачеві обрану йому систему
	ws.RunBestSystem();
	return 0;
}