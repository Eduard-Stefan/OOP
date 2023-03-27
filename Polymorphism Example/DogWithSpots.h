#pragma once
#include "Dog.h"

class DogWithSpots : virtual public Dog
{
public:
	void Read();
	void Print();
	string GetType();
private:
	int NumberOfSpots;
};