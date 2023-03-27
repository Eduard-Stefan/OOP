#include <iostream>
#include <stdlib.h>
#include "Blackjack.h"

using namespace std;

void Blackjack::Play(int NumberOfPlayers, int NumberOfPacks)
{
	int* players = new int[NumberOfPlayers + 1];
	for (int i = 1; i <= NumberOfPlayers; i++)
		players[i] = 0;
	int status;
	int random;
	for (int i = 1; i <= NumberOfPlayers; i++)
	{
		random = rand() % 52;
		while (packs.cards[random].GetStatus() == NumberOfPacks)
			random = rand() % 52;
		status = packs.cards[random].GetStatus();
		status++;
		packs.cards[random].SetStatus(status);
		players[i] += packs.cards[random].GetNumber();
		cout << "Player " << i << " extracted: " << packs.cards[random].GetNumber() << " ";
		packs.cards[random].PrintSuit();
		cout << endl;
	}
	int max = 0;
	int winner;
	for (int i = 1; i <= NumberOfPlayers; i++)
	{
		random = rand() % 52;
		while (packs.cards[random].GetStatus() == NumberOfPacks)
			random = rand() % 52;
		status = packs.cards[random].GetStatus();
		status++;
		packs.cards[random].SetStatus(status);
		players[i] += packs.cards[random].GetNumber();
		cout << "Player " << i << " extracted: " << packs.cards[random].GetNumber() << " ";
		packs.cards[random].PrintSuit();
		cout << endl;
		if (players[i] <= 21 && players[i] > max)
		{
			max = players[i];
			winner = i;
		}
	}
	if (max == 0)
		cout << "There is no winner";
	else
		cout << endl << "The winner is player " << winner << endl;
	delete[] players;
}