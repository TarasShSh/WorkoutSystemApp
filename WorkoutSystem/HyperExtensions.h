// HyperExtensions.h

#pragma once
#include <string>
#include <iostream>

using namespace std;

class HyperExtensions // назва класу-вправи
{
private:
    string name; // назва вправи
public:
    void SetName(string value) { name = value; };
    string GetName() { return name; };

    void DoExercise(); // робимо вправу

    void ShowInfo(); // Інформація про вправу
};

