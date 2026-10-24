// Copyright Thispring Studio

#pragma once

#include "../CoreTypes.h"
#include "Singleton.h"

class TimeSubsystem
{

	friend class Singleton<TimeSubsystem>;

public:
	void Temp() {};

private:
	TimeSubsystem()
	{
		std::cout << "Call TimeSubsystem Construct" << std::endl;
	}
};