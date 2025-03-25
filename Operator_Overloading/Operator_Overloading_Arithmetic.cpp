#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overloading + using a member function
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
    Complex c1(3, 4), c2(2, 5);
    Complex c3 = c1 + c2;  // Interpreted as c1.operator+(c2)
    c3.display();  // Output: 5 + 9i
    return 0;
}
