#include <iostream>
#include <stdlib.h>
#include "agentie.h"

using namespace std;

#define NrBilete 4

AgentieLoto::AgentieLoto()
{
	bilet = new int[NrBilete + 1];
	for (int i = 1; i <= NrBilete; i++)
		bilet[i] = 0;
	v1 = new int[7];
	v2 = new int[7];
	v3 = new int[7];
}

AgentieLoto::~AgentieLoto()
{
	delete[] bilet;
	delete[] v1;
	delete[] v2;
	delete[] v3;
}

void AgentieLoto::bilete()
{
	for (int i = 1; i <= NrBilete; i++)
	{
		cout << "Biletul " << i << ":" << endl;
		numere.SetStatus();
		numere.generator(v1);
		if (numere.verify(v1))
			bilet[i] = 1;
		for (int i = 1; i <= 6; i++)
			cout << v1[i] << " ";
		cout << endl;
		numere.SetStatus();
		numere.generator(v2);
		if (numere.verify(v2))
			bilet[i] = 1;
		for (int i = 1; i <= 6; i++)
			cout << v2[i] << " ";
		cout << endl;
		numere.SetStatus();
		numere.generator(v3);
		if (numere.verify(v3))
			bilet[i] = 1;
		for (int i = 1; i <= 6; i++)
			cout << v3[i] << " ";
		cout << endl << endl;
	}
	int ok = 0;
	for (int i = 1; i <= NrBilete; i++)
		if (bilet[i])
		{
			ok = 1;
			break;
		}
	if (ok == 0)
		cout << "Nu exista bilete castigatoare" << endl;
	else
	{
		cout << "Biletele castigatoare sunt: ";
		for (int i = 1; i <= NrBilete; i++)
			if (bilet[i])
				cout << i << " ";
		cout << endl;
	}
}