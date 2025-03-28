﻿#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r, int i) : real(r), imag(i) {}
    friend Complex operator+(Complex c1, Complex c2); // Friend function for operator overloading
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(Complex c1, Complex c2) {  // Friend function definition
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;  // ✅ Using overloaded + operator
    c3.display();
    return 0;
}
