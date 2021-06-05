#include "PushPullLegs.h"
void PushPullLegs::MainMenu() { // головне меню PPL
	int key;
	cout << " [1] Ч ≤нформац≥€ про систему" << endl;
	cout << " [2] Ч ѕерейти до тренуванн€" << endl;
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
		TrainingMenu(); // переходимо в тренувальне меню
	case 0:
		exit(0); // виходимо з програми
	}
}
void PushPullLegs::ShowSystemInfo() { // ќтримуЇмо ≥нформац≥ю про систему
	cout << " ÷€ система тренувань нац≥лена на ≥зол€ц≥ю окремих м'€з≥в на окремих тренуванн€х" << endl << endl;
		cout << " ¬сього вона складаЇтьс€ з трьох вид≥в тренувань:" << endl;
	cout << " Push: включаЇ т≥ вправи, при €ких ти штовхаЇш знар€д в≥д себе" <<
		endl;
	cout << " Pull: включаЇ т≥ вправи, при €ких ти т€гнеш знар€д на себе " << endl;
	cout << " Legs: ус≥ вправи €к≥ головним чином навантажують ноги" << endl <<
		endl;
	cout << " “ренуванн€ включаЇ вправи лише на одну частину вашого т≥ла, в той час €к ≥нш≥ можуть в≥дновитис€" << endl <<
		" ≥ бути готовими до наступного тренуванн€" << endl;
	cout << " ÷€ система Ї ≥деальною дл€ зб≥льшенн€ м'€з≥в ≥ даЇ змогу за м≥н≥мальний час дос€гти результат≥в" << endl;
		cout << " ѕотребуЇ тренажери" << endl;
}
void PushPullLegs::TrainingMenu() { // тренувальне меню
	int key;
	cout << " [1] Ч ѕочати \"Push\" тренуванн€" << endl;
	cout << " [2] Ч ѕочати \"Pull\" тренуванн€" << endl;
	cout << " [3] Ч ѕочати тренуванн€ н≥г" << endl;
	cout << " [0] Ч ¬ийти з програми" << endl;
	do {
		cout << " ¬вед≥ть ваше значенн€: "; cin >> key;
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
		exit(0); // виходимо з програми
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
	cout << " [1] Ч ѕерейти до наступноњ вправи" << endl;
	cout << " [0] Ч ¬ийти з програми" << endl;
	do {
		cout << " ¬вед≥ть ваше значенн€: "; cin >> key;
	} while (key != 1 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		break; // наступна вправа
	case 0:
		exit(0); // виходимо з програми
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
		cout << " ¬и виконали вправу " << vpravy[0] << endl;
	else {
		cout << " ¬и виконали так≥ вправи: ";
		for (int i = 0; i < counter; i++) {
			cout << vpravy[i] << "; ";
			if ((i / 5) * 5 == i) // перенесенн€ на новий р€док, €кщо на екран≥ вже Ї 5 вправ
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
		cout << " ¬и виконали вправу " << vpravy[0] << endl;
	else {
		cout << " ¬и виконали так≥ вправи: ";
		for (int i = 0; i < counter; i++) {
			cout << vpravy[i] << "; ";
			if ((i / 5) * 5 == i) // перенесенн€ на новий р€док, €кщо на екран≥ вже Ї 5 вправ
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
		cout << " ¬и виконали вправу " << vpravy[0] << endl;
	else {
		cout << " ¬и виконали так≥ вправи: ";
		for (int i = 0; i < counter; i++) {
			cout << vpravy[i] << "; ";
			if ((i / 5) * 5 == i) // перенесенн€ на новий р€док, €кщо на екран≥ вже Ї 5 вправ
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
	cout << " ¬и виконали ус≥ вправи!" << endl;
	cout << " [1] Ч —писок виконаних вправ" << endl;
	cout << " [0] Ч ¬ийти з програми" << endl;
	do {
		cout << " ¬вед≥ть ваше значенн€:"; cin >> key;
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
