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
	ws.Start();
	return 0;
}