#include <iostream>
#include "DogWithoutSpots.h"
#include "DogWithSpots.h"

using namespace std;

int main()
{
	DogWithoutSpots dog1;
	DogWithSpots dog2;
	cout << "The dog without spots:" << endl;
	dog1.Read();
	dog1.Print();
	cout << endl;
	cout << "The dog with spots:" << endl;
	dog2.Read();
	dog2.Print();
	return 0;
}