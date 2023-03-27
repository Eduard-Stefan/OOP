#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(double real/*=0*/, double imaginary/*=0*/) :
	real(real),
	imaginary(imaginary)
{}

Complex Complex::operator+(const Complex& a) const
{
	Complex sum;
	sum.real = this->real + a.real;
	sum.imaginary = this->imaginary + a.imaginary;
	return sum;
}

Complex Complex::operator-(const Complex& a) const
{
	Complex dif;
	dif.real = this->real - a.real;
	dif.imaginary = this->imaginary - a.imaginary;
	return dif;
}

double Complex::operator~() const
{
	return sqrt(this->real * this->real + this->imaginary * this->imaginary);
}

Complex Complex::operator^(const int exponent) const
{
	Complex number(this->real, this->imaginary);
	double modulus = ~number;
	double modulus_to_the_exponent = 1;
	for (int i = 1; i <= exponent; i++)
		modulus_to_the_exponent = modulus_to_the_exponent * modulus;
	double argument = atan2(number.imaginary, number.real);
	Complex result;
	result.real = modulus_to_the_exponent * cos(exponent * argument);
	result.imaginary = modulus_to_the_exponent * sin(exponent * argument);
	return result;
}

Complex Complex::operator/(const Complex& a) const
{
	Complex result;
	result.real = (this->real * a.real + this->imaginary * a.imaginary) / (a.real * a.real + a.imaginary * a.imaginary);
	result.imaginary = (this->imaginary * a.real - this->real * a.imaginary) / (a.real * a.real + a.imaginary * a.imaginary);
	return result;
}

ostream& operator<<(ostream& os, const Complex& a)
{
	os << a.real << "+i*" << a.imaginary << endl;
	return os;
}