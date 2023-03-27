#pragma once
#include "Dog.h"

class DogWithoutSpots : virtual public Dog
{
public:
	void Read();
	void Print();
	string GetType();
};