#include "FullBody.h"
#include <iostream>
using namespace std;
void FullBody::MainMenu() { // головне меню ‘улбад≥
	int key;
	cout << " [1] Ч ≤нформац≥€ про систему" << endl;
	cout << " [2] Ч ѕочати тренуванн€" << endl;
	cout << " [0] Ч ¬ийти з програми" << endl;
	do {
		cout << " ¬вед≥ть ваше значенн€: "; cin >> key;
	} while (key != 1 && key != 2 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		ShowSystemInfo(); // ѕереходимо в функц≥ю, €ка даЇ ≥нформац≥ю про систему
		cout << endl;
		MainMenu(); // ѕ≥сл€ отриманн€ ≥нф. повертаЇмось в це меню
	case 2:
		TrainingMenu(); // переходимо в тренувальне меню (в ц≥й систем≥ одразу до вправ)
	case 0:
		exit(0); // виходимо з програми
	}
}
void FullBody::ShowSystemInfo() { // ќтримуЇмо ≥нформац≥ю про систему
		cout << " ÷€ система тренувань зад≥юЇ м'€зи всього т≥ла на кожному тренуванн≥" << endl;
		cout << " ¬она чудово п≥д≥йде новачкам, чиЇ т≥ло та м'€зи ще не готов≥ до" << endl;
		cout << "≥нтенсивних силових навантажень" << endl;
		cout << " “акож вона чудово п≥д≥йде тим, хто хоче тримати себе у форм≥, не нарощуючи м'€зи " << endl;
		cout << " “ренажери не обов'€зков≥" << endl;
}
void FullBody::TrainingMenu() { // тренувальне меню
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
	AllDone(counter); // ”с≥ вправи зроблено
}
void FullBody::BetweenMenu(int counter)
{
	int key;
	cout << " [1] Ч ѕерейти до наступноњ вправи" << endl;
	cout << " [0] Ч ¬ийти з програми" << endl;
	do {
		cout << " ¬вед≥ть ваше значенн€: "; cin >> key;
	} while (key != 1 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		break;
	case 0:
		exit(0); // виходимо з програми
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
		cout << " ¬и виконали вправу " << vpravy[0] << endl;
	else {
		cout << " ¬и виконали так≥ вправи: ";
		for (int i = 0; i < counter; i++) {
			cout << vpravy[i] << "; ";
		}
	}
}
void FullBody::AllDone(int counter)
{
	int key;
	cout << " ¬и виконали ус≥ вправи!" << endl;
	cout << " [1] Ч —писок виконаних вправ" << endl;
	cout << " [0] Ч ¬ийти з програми" << endl;
	do {
		cout << " ¬вед≥ть ваше значенн€:"; cin >> key;
	} while (key != 1 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		ShowDoneExercises(counter);
	case 0:
		exit(0);
	}
}
