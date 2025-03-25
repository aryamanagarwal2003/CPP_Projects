#include<iostream>
using namespace std;

inline int add(int x, int y) {
    return x + y;
}

inline int Max(int x, int y) {
    return x > y ? x : y;
}

int main() {
    int a = 4, b = 6;
    cout << "Sum: " << add(a, b) << endl;
    cout << "Max: " << Max(a, b) << endl;
}