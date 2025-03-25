#include <iostream>
using namespace std;

int main() {
    unsigned int a = 12;  // binary: 1100
    unsigned int b = 10;  // binary: 1010

    cout << "a & b = " << (a & b) << endl;  // AND
    cout << "a | b = " << (a | b) << endl;  // OR
    cout << "a ^ b = " << (a ^ b) << endl;  // XOR
    cout << "~a = " << (~a) << endl;      // NOT
    cout << "a << 2 = " << (a << 2) << endl;  // Left shift
    cout << "a >> 2 = " << (a >> 2) << endl;  // Right shift

    return 0;
}