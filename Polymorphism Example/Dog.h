#pragma once
#include <string>

using namespace std;

class Dog
{
public:
	virtual void Read();
	virtual void Print();
	virtual string GetType() = 0;
private:
	string name;
	float height;
	float weight;
	int age;
	string color;
};