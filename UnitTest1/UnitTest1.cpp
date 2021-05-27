#include "pch.h"
#include "CppUnitTest.h"
#include "../WorkoutSystem/Source.cpp"
#include "../WorkoutSystem/WorkoutSystem.cpp"
#include "../WorkoutSystem/PushPullLegs.cpp"
#include "../WorkoutSystem/BroSplit.cpp"
#include "../WorkoutSystem/FullBody.cpp"
#include "../WorkoutSystem/Exercise.h"

#include "../WorkoutSystem/BokoviVypady.cpp"
#include "../WorkoutSystem/Burpee.cpp"
#include "../WorkoutSystem/HyperExtensions.cpp"
#include "../WorkoutSystem/Lodochka.cpp"
#include "../WorkoutSystem/ObertGantSpina.cpp"
#include "../WorkoutSystem/OndorykiyPushGantelyaUP.cpp"
#include "../WorkoutSystem/PidjomNohy.cpp"
#include "../WorkoutSystem/PojejGidr.cpp"
#include "../WorkoutSystem/PoyasPull.cpp"
#include "../WorkoutSystem/Prysidannya.cpp"
#include "../WorkoutSystem/Shrug.cpp"
#include "../WorkoutSystem/SkakalkaJump.cpp"
#include "../WorkoutSystem/StanovaPull.cpp"
#include "../WorkoutSystem/StepUps.cpp"
#include "../WorkoutSystem/Vidjimannya.cpp"
#include "../WorkoutSystem/VidjimNaBrus.cpp"

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