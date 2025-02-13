#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class Complex
{
private:
	float re;
	float im;
public:
	Complex(float r, float i)
	{
		re = r;
		im = i;
	}
	Complex(float r)
	{
		re = r;
		im = 0.0;
	}
	~Complex()
	{
		cout << "destructer called." << endl;
	}
	double magnitude()
	{
		return sqrt(re * re + Imag() * Imag());
	}
	float Real()
	{
		return re;
	}
	float Imag()
	{
		return im;
	}
	Complex operator+(Complex b)
	{
		return Complex(re + b.re, im + b.im);
	}
	Complex operator=(Complex b)
	{
		re = b.re;
		im = b.im;
		return *this;
	}
};
