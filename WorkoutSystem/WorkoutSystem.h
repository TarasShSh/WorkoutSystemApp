// WorkoutSystem.h
#pragma once
#include <iostream>
#include "FullBody.h"
#include "PushPullLegs.h"
#include "BroSplit.h"
using namespace std;

class WorkoutSystem
{
private:
	string gender, meta, forma; // Дані, які буде вводити користувач
	FullBody FB; PushPullLegs PPL; BroSplit BS; // створюємо об'єкти
public:	
	void EnterValues();
	void RunBestSystem();
	string ReturnTheBestSystem();
};

