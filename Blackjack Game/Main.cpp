#include <iostream>
#include <stdlib.h>
#include "Blackjack.h"

using namespace std;

int main()
{
	srand(time(0));
	Pack pack;
	pack.PrintCards();
	Blackjack blackjack;
	cout << "Introduce the number of packs: ";
	cin >> blackjack.NumberOfPacks;
	cout << "Introduce the number of players: ";
	cin >> blackjack.NumberOfPlayers;
	cout << endl;
	blackjack.Play(blackjack.NumberOfPlayers, blackjack.NumberOfPacks);
	return 0;
}