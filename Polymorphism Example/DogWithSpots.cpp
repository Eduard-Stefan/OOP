#include <iostream>
#include "DogWithSpots.h"

using namespace std;

void DogWithSpots::Read()
{
	Dog::Read();
	cout << "Number of spots: ";
	cin >> NumberOfSpots;
}
void DogWithSpots::Print()
{
	Dog::Print();
	cout << "Number of spots: " << NumberOfSpots << endl;
}
string DogWithSpots::GetType()
{
	return "DogWithSpots";
}