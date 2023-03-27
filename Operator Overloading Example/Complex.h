#pragma once

#include <iostream>

using namespace std;

class Complex
{
public:
	Complex(double real = 0, double imaginary = 0);
	Complex operator+(const Complex& a) const;
	Complex operator-(const Complex& a) const;
	double operator~() const;
	Complex operator^(const int exponent) const;
	Complex operator/(const Complex& a) const;
	friend ostream& operator<<(ostream& os, const Complex& a);
private:
	double real;
	double imaginary;
};