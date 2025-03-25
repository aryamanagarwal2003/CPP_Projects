#include <iostream>
using namespace std;


class Complex {
public:
    int real, imag;
    Complex(int r, int i) : real(r), imag(i) {}

    bool operator==(const Complex& other) {
        return (real == other.real && imag == other.imag);
    }
};

int main() {
    Complex c1(2, 3), c2(2, 3);
    if (c1 == c2)
        cout << "Equal" << endl;  // Calls c1.operator==(c2)
    else
        cout << "Not Equal" << endl;
    return 0;
}
