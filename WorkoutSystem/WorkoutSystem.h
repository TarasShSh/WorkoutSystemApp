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
	string gender, meta, forma; // Дані, які буде вводити користувач
	FullBody FB; PushPullLegs PPL; BroSplit BS; // створюємо об'єкти
	void Start();
	void EnterValues();
	void RunBestSystem();
	string ReturnTheBestSystem();

	/*
	void SetFB(FullBody value) { FB = value; };
	FullBody GetFB() { return FB; };

	void SetPPL(PushPullLegs value) { PPL = value; };
	PushPullLegs GetPPL() { return PPL; };


	void SetBS(BroSplit value) { BS = value; };
	BroSplit GetBS() { return BS; };

	void SetGender(string value) { gender = value; };
	string GetGender() { return gender; };

	void SetMeta(string value) { meta = value; };
	string GetMeta() { return meta; };


	void SetForma(string value) { forma = value; };
	string GetForma() { return forma; };

	WorkoutSystem(FullBody FB, PushPullLegs PPL, BroSplit BS, string gender, string meta, string forma)
	{
		SetFB(FB);
		SetPPL(PPL);
		SetBS(BS);
		SetGender(gender);
		SetMeta(meta);
		SetForma(forma);
	}*/

	/*
	WorkoutSystem(string gender_, string meta_, string forma_)
		:gender(gender_), meta(meta_), forma(forma_)
	{}*/

};

