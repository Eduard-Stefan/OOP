#include <iostream>
#include <stdlib.h>
#include "agentie.h"

using namespace std;

int main()
{
	srand(time(0));
	ball loterie;
	AgentieLoto bilete;
	int* v = new int[7];
	loterie.generator(v);
	loterie.extragere(v);
	bilete.bilete();
	delete[] v;
	return 0;
}