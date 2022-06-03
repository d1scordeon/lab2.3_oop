//Complex.h
#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Complex
{
private:
	double x, y;

public:
	Complex();
	Complex(double x, double y);
	Complex(const Complex& v);
	~Complex();

	double GetRe() const { return x; }
	double GetIm() const { return y; }

	void SetRe(double value) { x = value; }
	void SetIm(double value) { y = value; }

	Complex& operator =(const Complex& n);
	operator string() const;

	Complex& operator --();
	Complex& operator ++();
	Complex operator --(int);
	Complex operator ++(int);

	friend  Complex operator + (Complex Z1, Complex Z2);
	friend  Complex operator * (Complex Z1, Complex Z2);
	friend  bool operator == (Complex Z1, Complex Z2);

	friend ostream& operator <<(ostream& out, const  Complex& a);
	friend istream& operator >>(istream& in, Complex& a);
};
