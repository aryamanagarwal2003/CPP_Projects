#include <iostream>
using namespace std;

template <typename T>
class Printer {
public:
    void print(T value) { cout << "Value: " << value << endl; }
};

// Specialization for char*
template <>
class Printer<char*> {
public:
    void print(char* value) { cout << "String: " << value << endl; }
};

int main() {
    Printer<int> p1;
    p1.print(100);  // Output: Value: 100

    Printer<char*> p2;
    p2.print("Hello");  // Output: String: Hello

    return 0;
}
