// WorkoutSystem.cpp
#include "WorkoutSystem.h"

void WorkoutSystem::EnterValues()
{
cout << " ¬вед≥ть ус≥ потр≥бн≥ дан≥:" << endl << endl;
{ // обираЇмо стать
	int key;
	cout << " ќбер≥ть вашу стать:" << endl;
	cout << " [1] Ч „олов≥к" << endl;
	cout << " [2] Ч ∆≥нка" << endl;
	do {
		cout << " ¬вед≥ть ваше значенн€: "; cin >> key;
	} while (key != 1 && key != 2);

	cout << endl << endl;

	if (key == 1) // «аписуЇмо стать у поле gender
		gender = "male";
	else if (key == 2)
		gender = "female";
}

{ // обираЇмо мету
	int key;
	cout << " ќбер≥ть мету ваших тренувань:" << endl;
	cout << " [1] Ч Ќаб≥р м'€з≥в" << endl;
	cout << " [2] Ч —киданн€ ваги" << endl;
	do {
		cout << " ¬вед≥ть ваше значенн€: "; cin >> key;
	} while (key != 1 && key != 2);

	cout << endl << endl;

	if (key == 1) // записуЇмо мету у поле meta 
		meta = "Muscles";
	else if (key == 2)
		meta = "WeightLoss";
}

{ // обираЇмо ф≥зичну форму
	int key;
	cout << " ќбер≥ть в €к≥й ф≥зичн≥й форм≥ ви знаходитесь" << endl;
	cout << " [1] Ч ѕогана" << endl;
	cout << " [2] Ч —ередн€" << endl;
	cout << " [3] Ч „удова" << endl;
	do {
		cout << " ¬вед≥ть ваше значенн€: "; cin >> key;
	} while (key != 1 && key != 2 && key != 3);

	cout << endl;

	if (key == 1) // записуЇмо ф≥зичну форму у поле forma 
		forma = "New";
	else if (key == 2)
		forma = "Average";
	else if (key == 3)
		forma = "Athlet";
}
	}

string WorkoutSystem::ReturnTheBestSystem()
{
		if (meta == "WeightLoss") { // €кщо мета Ч схудненн€
			if (forma == "New" || forma == "Average") // ≥ форма не атлет
				return "Fullbody"; // отримуЇмо систему фулбад≥
			else if (forma == "Athlet") // €кщо форма атлет
				return "Push Pull Legs"; // отримуЇму систему PPL
		}

		else if (meta == "Muscles") { // якщо мета наб≥р м'€з≥в,
			if (forma == "New") // то кожн≥й форм≥ в≥дпов≥даЇ окрема система
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
			FB.MainMenu(); // ѕерех≥д до меню системи ‘улбад≥
		else if (ReturnTheBestSystem() == "Push Pull Legs")
			PPL.MainMenu(); // ѕерех≥д до меню системи PPL
		else if (ReturnTheBestSystem() == "Bro-split")
			BS.MainMenu(); // ѕерех≥д до меню системи Bro-split
}
