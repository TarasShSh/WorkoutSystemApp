#include "pch.h"
#include "CppUnitTest.h"
#include "../WorkoutSystem/Source.cpp"
#include "../WorkoutSystem/WorkoutSystem.h"
#include "../WorkoutSystem/PushPullLegs.h"
#include "../WorkoutSystem/BroSplit.h"
#include "../WorkoutSystem/FullBody.h"
#include "../WorkoutSystem/Exercise.h"

#include "../WorkoutSystem/BokoviVypady.h"
#include "../WorkoutSystem/Burpee.h"
#include "../WorkoutSystem/HyperExtensions.h"
#include "../WorkoutSystem/Lodochka.h"
#include "../WorkoutSystem/ObertGantSpina.h"
#include "../WorkoutSystem/OndorykiyPushGantelyaUP.h"
#include "../WorkoutSystem/PidjomNohy.h"
#include "../WorkoutSystem/PojejGidr.h"
#include "../WorkoutSystem/PoyasPull.h"
#include "../WorkoutSystem/Prysidannya.h"
#include "../WorkoutSystem/Shrug.h"
#include "../WorkoutSystem/SkakalkaJump.h"
#include "../WorkoutSystem/StanovaPull.h"
#include "../WorkoutSystem/StepUps.h"
#include "../WorkoutSystem/Vidjimannya.h"
#include "../WorkoutSystem/VidjimNaBrus.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            WorkoutSystem fb, ppl, bs, n;
            fb.gender = string("male");
            fb.meta = string("WeightLoss");
            fb.forma = string("New");

            ppl.gender = string("male");
            ppl.meta = string("WeightLoss");
            ppl.forma = string("Athlet");

            bs.gender = string("male");
            bs.meta = string("Muscles");
            bs.forma = string("Athlet");

            n.gender = string("");
            n.meta = string("");
            n.forma = string("");

            Assert::AreEqual(fb.ReturnTheBestSystem(), string("Fullbody"));
            Assert::AreEqual(ppl.ReturnTheBestSystem(), string("Push Pull Legs"));
            Assert::AreEqual(bs.ReturnTheBestSystem(), string("Bro-split"));
            Assert::AreEqual(n.ReturnTheBestSystem(), string("null"));
        }
    };
}