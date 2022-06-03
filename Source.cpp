//Source.cpp
#include "Complex.h"

int main()
{
    cout << "initialization of A" << endl;
    Complex A(4, 5), B;
    cout << "A = " << A << endl;

    cout << "Size of class: " << sizeof(A) << endl;

    cout << "initialization of B" << endl;
    cin >> B;
    cout << "B = " << B << endl;

    cout << "Sum of complex numbers" << endl;
    Complex C = A + B;
    cout << "C = " << C << endl;

    cout << "Product of complex numbers" << endl;
    Complex D = A * B;
    cout << "D = " << D << endl;

    if (A == B)
        cout << "Complex numbers are equal" << endl;
    else
        cout << "Complex numbers are not equal" << endl;

    cout << "++A: " << ++A << endl;
    cout << "--A: " << --A << endl;
    cout << "A++: " << A++ << endl;
    cout << "A--: " << A-- << endl << endl;
}