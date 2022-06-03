//Complex.cpp
#include "Complex.h"
#include "Complex.h"

Complex::Complex()
{
	x = 0;
	y = 0;
}

Complex::Complex(double X = 0, double Y = 0)
{
	x = X;
	y = Y;
}

Complex::Complex(const Complex& v)
{
	x = v.x;
	y = v.y;
}

Complex::~Complex()
{}

Complex& Complex::operator = (const Complex& n)
{
	x = n.x;
	y = n.y;
	return *this;
}

Complex::operator string () const
{
	stringstream ss;
	ss << x << " + i * " << y << endl;
	return ss.str();
}

Complex& Complex::operator --()
{
	--x;
	return *this;
}

Complex& Complex::operator ++()
{
	++x;
	return *this;
}

Complex Complex::operator --(int)
{
	Complex a(*this);
	y--;
	return a;
}

Complex Complex::operator ++(int)
{
	Complex a(*this);
	y++;
	return a;
}

Complex operator + (Complex Z1, Complex Z2)
{
	Complex tmp(0, 0);
	tmp.x = Z1.x + Z2.x;
	tmp.y = Z1.y + Z2.y;
	return tmp;
}

Complex operator * (Complex Z1, Complex Z2)
{
	Complex tmp(0, 0);
	tmp.x = (Z1.x * Z2.x) - (Z1.y * Z2.y);
	tmp.y = (Z1.x * Z2.y) + (Z2.x * Z1.y);
	return tmp;
}

bool operator == (Complex Z1, Complex Z2)
{
	return Z1.x == Z2.x && Z1.y == Z2.y;
}

ostream& operator <<(ostream& out, const Complex& a)
{
	return out << string(a);
}

istream& operator >>(istream& in, Complex& a)
{
	cout << "x = "; in >> a.x;
	cout << "y = "; in >> a.y;
	return in;
}
