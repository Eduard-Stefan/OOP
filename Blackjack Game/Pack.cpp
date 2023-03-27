#include <iostream>
#include "Pack.h"

using namespace std;

Pack::Pack()
{
	cards = new Card[52];
	int number = 2;
	int suit = 1;
	for (int i = 0; i < 52; i++)
	{
		if (number == 15)
		{
			number = 2;
			suit++;
		}
		cards[i].SetNumber(number);
		cards[i].SetSuit(suit);
		cards[i].SetStatus(0);
		number++;
	}
}
Pack::~Pack()
{
	delete[] cards;
}
void Pack::PrintCards()
{
	cout << "The cards from the pack are:" << endl;
	for (int i = 0; i < 52; i++)
	{
		cout << cards[i].GetNumber() << " ";
		cards[i].PrintSuit();
		cout << endl;
	}
	cout << endl;
}