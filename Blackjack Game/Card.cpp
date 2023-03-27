#include <iostream>
#include "Card.h"

using namespace std;

void Card::SetNumber(int number)
{
	this->number = number;
}
void Card::SetSuit(int suit)
{
	this->suit = suit;
}
void Card::SetStatus(int status)
{
	this->status = status;
}
int Card::GetNumber()
{
	return number;
}
int Card::GetSuit()
{
	return suit;	
}
int Card::GetStatus()
{
	return status;
}
void Card::PrintSuit()
{
	if (suit == 1)
		cout << "club";
	else if (suit == 2)
		cout << "diamond";
	else if (suit == 3)
		cout << "heart";
	else if (suit == 4)
		cout << "spade";
}