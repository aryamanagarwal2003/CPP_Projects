#include <iostream>
using namespace std;
int main() {
    int x = 10;
    auto printX = [x]() { cout << "Captured by value: " << x << endl; };
    x = 20;  // Changing x outside the lambda
    printX();  // Lambda still prints the old value
    return 0;
}
