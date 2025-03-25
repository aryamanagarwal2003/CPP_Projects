#include <iostream>
using namespace std;

template <typename T = int>
class Test {
public:
    T value;
    Test(T v) : value(v) {}
    void display() { cout << "Value: " << value << endl; }
};

int main() {
    Test<> obj1(10);  // Uses default type (int)
    obj1.display();  // Output: Value: 10

    Test<double> obj2(3.14);  // Uses double
    obj2.display();  // Output: Value: 3.14

    return 0;
}
