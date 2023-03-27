#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	int length;
	cin >> length;
	Complex* v = new Complex[length * 2];
	double real;
	double imaginary;
	for (int i = 0; i < length * 2; i++)
	{
		cin >> real >> imaginary;
		Complex number(real, imaginary);
		v[i] = number;
	}
	Complex numerator;
	Complex denominator;
	for (int i = 0; i < length * 2; i++)
	{
		if (i % 2 == 0)
			numerator = numerator + v[i] ^ 3;
		else
			denominator = denominator + v[i] ^ 4;
	}
	delete[] v;
	Complex z = numerator / denominator;
	cout << z;
	return 0;
}