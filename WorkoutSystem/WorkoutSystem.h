// WorkoutSystem.h
#pragma once
#include <iostream>
#include "FullBody.h"
#include "PushPullLegs.h"
#include "BroSplit.h"
using namespace std;

class WorkoutSystem
{
	
public:	
	string gender, meta, forma; // ���, �� ���� ������� ����������
	FullBody FB; PushPullLegs PPL; BroSplit BS; // ��������� ��'����
	void EnterValues();
	void RunBestSystem();
	string ReturnTheBestSystem();
};

