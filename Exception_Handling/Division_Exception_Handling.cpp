#include <iostream>
using namespace std;

void divide(int a, int b) {
    if (b == 0)
        throw "Division by zero error!";  // Throwing a string exception
    cout << "Result: " << a / b << endl;
}

int main() {
    try {
        divide(10, 2);
        divide(5, 0);  // This will cause an exception
    }
    catch (const char* msg) {  // Catching the exception
        cout << "Exception caught: " << msg << endl;
    }
    return 0;
}