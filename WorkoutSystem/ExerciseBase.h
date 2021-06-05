#pragma once
#include <map>
#include "Exercise.h"

class ExerciseBase
{
	std::map<std::string, Exercise*> _exercises;
public:

	ExerciseBase() {}

	void AddExersise(const std::string &code, Exercise *ex)
	{
		if (_exercises.find(code) != _exercises.end())
		{
			std::cerr << "Exersize with code \"" << code << "\" already been in ExersizeBase!" << std::endl;
			return;
		}

/*#ifdef _DEBUG_
		std::cout << "Succesful init exercise with code \"" << code << "\"" << std::endl;
#endif // _DEBUG_*/

		_exercises.insert(std::pair<std::string, Exercise*>(code, ex));
	}

	const Exercise* GetExercise(const std::string &code) const
	{
		if (_exercises.find(code) == _exercises.end())
		{
			std::cerr << "Exersize with code \"" << code << "\" not in ExersizeBase!" << std::endl;
			return nullptr;
		}

/*#ifdef _DEBUG_
		std::cout << "Succesful get exercise with code \"" << code << "\"" << std::endl;
#endif // _DEBUG_*/

		return _exercises.at(code);
	}

	~ExerciseBase()
	{
		for (auto& item : _exercises)
		{
			delete item.second;
			item.second = nullptr;
		}
		_exercises.clear();
	}
};

