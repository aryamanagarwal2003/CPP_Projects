#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 20;
    auto lambda = [=, &b]() { b += a; };  // a by value, b by reference
    lambda();
    cout << "a: " << a << ", b: " << b << endl;
    return 0;
}
