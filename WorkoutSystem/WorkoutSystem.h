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
	string gender, meta, forma; // ���, �� ���� ������� ����������
	FullBody FB; PushPullLegs PPL; BroSplit BS; // ��������� ��'����
public:	
	void EnterValues();
	void RunBestSystem();
	string ReturnTheBestSystem();
};

