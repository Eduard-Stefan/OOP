#include "loto.h"
class AgentieLoto
{
public:
	AgentieLoto();
	~AgentieLoto();
	void bilete();
private:
	ball numere;
	int* bilet;
	int* v1;
	int* v2;
	int* v3;
};