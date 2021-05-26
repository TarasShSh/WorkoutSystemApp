// Exercise.h

#pragma once
#include "Lodochka.h"
#include "HyperExtensions.h"
#include "stanovaPull.h"
#include "PoyasPull.h"
#include "Shrug.h"
#include "OndorykiyPushGantelyaUp.h"
#include "ObertGantSpina.h"
#include "Vidjimannya.h"
#include "VidjimNaBrus.h"
#include "Prysidannya.h"
#include "BokoviVypady.h"
#include "PojejGidr.h"
#include "StepUps.h"
#include "PidjomNohy.h"
#include "SkakalkaJump.h"
#include "Burpee.h"

class Exercise // у цей клас будуть вноситись усі вправи, для кожної вправи буде свій клас
{
public:
	// Pull
	Lodochka lodochka;
	HyperExtensions hyperExt;
	StanovaPull stanovaPull;
	PoyasPull poyasPull;
	Shrug shrug;
	// Push
	// Плечі
	OndorykiyPushGantelyaUp oneArmGantUp;
	ObertGantSpina obertGantSpina;
	// Груди
	Vidjimannya vidjim;
	// Тріцепс
	VidjimNaBrus vidjimNaBrus;
	// Ноги
	Prysidannya prysid;
	BokoviVypady bokVyp;
	PojejGidr pojejGidr;
	StepUps stepUps;
	PidjomNohy pidjomNohy;
	// Кардіо
	SkakalkaJump skakalka;
	Burpee burpee;
};