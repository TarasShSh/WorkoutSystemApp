#include "Vprava_base.h"
void Vprava_base::DoExercise() { // робимо вправу
	
	cout << " ¬и робите вправу " << name << endl;
	int key;
	cout << " [1] Ч як виконувати вправу" << endl;
	cout << " [2] Ч «авершити виконанн€ вправи" << endl;
	cout << " [0] Ч ¬ийти з програми" << endl;
	do {
		cout << " ¬вед≥ть ваше значенн€:"; cin >> key;
	} while (key != 1 && key != 2 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		ShowInfo(); // показуЇмо ≥нф. про вправу ≥ повертаЇмось до цього меню
		DoExercise();
	case 2:
		break; // припин€Їмо виконанн€ ц≥Їњ вправи
	case 0:
		exit(0); // виходимо з програми
	}
}
