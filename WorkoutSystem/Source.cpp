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
	ws.Start();
	return 0;
}