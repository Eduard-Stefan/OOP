#include <iostream>
#include "Dog.h"

using namespace std;

void Dog::Read()
{
	cout << "Name: ";
	cin >> name;
	cout << "Height: ";
	cin >> height;
	cout << "Weight: ";
	cin >> weight;
	cout << "Age: ";
	cin >> age;
	cout << "Color: ";
	cin >> color;
}
void Dog::Print()
{
	cout << endl;
	cout << "Name: " << name << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "Age: " << age << endl;
	cout << "Color: " << color << endl;
}