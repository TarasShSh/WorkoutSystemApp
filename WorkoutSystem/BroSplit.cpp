#include "BroSplit.h"
void BroSplit::MainMenu() { // головне меню Фулбаді
	int key;
	cout << " [1] — Інформація про систему" << endl;
	cout << " [2] — Почати тренування" << endl;
	cout << " [0] — Вийти з програми" << endl;
	do {
		cout << " Введіть ваше значення: "; cin >> key;
	} while (key != 1 && key != 2 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		ShowSystemInfo(); // Переходимо в функцію, яка дає інформацію про систему
		cout << endl;
		MainMenu(); // Після отримання інф. повертаємось в це меню
	case 2:
		TrainingMenu(); // переходимо в тренувальне меню (в цій системі одразу до вправ)
	case 0:
		exit(0); // виходимо з програми
	}
}
void BroSplit::ShowSystemInfo() { // Отримуємо інформацію про систему
	cout << " Ця система тренувань націлена на ізоляцію м'язів на окремих тренуваннях, але на поточному" << endl <<
		" тренуванні ви прокачуєте якийсь м'яз верхньої частини тіла і якийсь нижньої" << endl;
	cout << " Не підійде для новачків, адже потрібно мати фізичну підготовку вище середнього для цієї системи, " << endl <<
		" бо вона містить складні вправи та велике навантаження" << endl;
	cout << " Ріст м'язів є досить повільним, але це тому, що вона розрахована на тих," << endl;
	cout << "у кого вони і так вже" << endl <<
		" прокачані, і потрібно просто їх вдосконалювати, а звичайні системи вжеанадто легкі" << endl;
}
void BroSplit::TrainingMenu() { // тренувальне меню
	int key;
	cout << " [1] — Почати \"Push\" тренування" << endl;
	cout << " [2] — Почати тренування ніг" << endl;
	cout << " [0] — Вийти з програми" << endl;
	do {
		cout << " Введіть ваше значення: "; cin >> key;
	} while (key != 1 && key != 2 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		PushTraining();
	case 2:
		LegsTraining();
	case 0:
		exit(0); // виходимо з програми
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
	cout << " [1] — Перейти до наступної вправи" << endl;
	cout << " [0] — Вийти з програми" << endl;
	do {
		cout << " Введіть ваше значення: "; cin >> key;
	} while (key != 1 && key != 0);
	cout << endl << endl;
	switch (key) {
	case 1:
		break; // наступна вправа
	case 0:
		exit(0); // виходимо з програми
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
		cout << " Ви виконали вправу " << vpravy[0] << endl;
	else {
		cout << " Ви виконали такі вправи: ";
		for (int i = 0; i < counter; i++) {
			cout << vpravy[i] << "; ";
			if ((i / 5) * 5 == i) // перенесення на новий рядок, якщо на екрані вже є 5 вправ
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
		cout << " Ви виконали вправу " << vpravy[0] << endl;
	else {
		cout << " Ви виконали такі вправи: ";
		for (int i = 0; i < counter; i++) {
			cout << vpravy[i] << "; ";
			if ((i / 5) * 5 == i) // перенесення на новий рядок, якщо на екрані вже є 5 вправ
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
	cout << " Ви виконали усі вправи!" << endl;
	cout << " [1] — Список виконаних вправ" << endl;
	cout << " [0] — Вийти з програми" << endl;
	do {
		cout << " Введіть ваше значення:"; cin >> key;
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
