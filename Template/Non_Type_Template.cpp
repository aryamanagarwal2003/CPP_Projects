#include <iostream>
using namespace std;

template <typename T, int size>
class Array {
private:
    T arr[size];
public:
    void set(int index, T value) { arr[index] = value; }
    T get(int index) { return arr[index]; }
    void display() {
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Array<int, 5> intArray;  // Integer array of size 5
    intArray.set(0, 10);
    intArray.set(1, 20);
    intArray.display();  // Output: 10 20 0 0 0

    Array<double, 3> doubleArray;  // Double array of size 3
    doubleArray.set(0, 1.1);
    doubleArray.set(1, 2.2);
    doubleArray.display();  // Output: 1.1 2.2 0

    return 0;
}
