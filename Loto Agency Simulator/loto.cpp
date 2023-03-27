#include <iostream>
#include <stdlib.h>
#include "agentie.h"

using namespace std;

ball::ball()
{
	NumereleExtrase = new int[7];
	status = new int[50];
	for (int i = 1; i <= 49; i++)
		status[i] = 0;
}

ball::~ball()
{
	delete[] NumereleExtrase;
	delete[] status;
}

void ball::generator(int v[])
{
	int random;
	for (int i = 1; i <= 6; i++)
	{
		random = rand() % 49 + 1;
		if (status[random] == 0)
		{
			status[random] = 1;
			v[i]=random;
		}
		else
			i--;
	}
}

void ball::extragere(int v[])
{
	cout << "Numerele extrase sunt: " << endl;
	for (int i = 1; i <= 6; i++)
	{
		NumereleExtrase[i] = v[i];
		cout << NumereleExtrase[i] << " ";
	}
	cout << endl << endl;
}

void ball::SetStatus()
{
	for (int i = 1; i <= 49; i++)
		status[i] = 0;
}

int ball::verify(int v[])
{
	for (int i = 1; i <= 6; i++)
		if (v[i] != NumereleExtrase[i])
			return 0;
	return 1;
}