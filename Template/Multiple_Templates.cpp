#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b) : first(a), second(b) {}

    void display() { cout << first << " and " << second << endl; }
};

int main() {
    Pair<int, double> p1(10, 20.5);
    p1.display();  // Output: 10 and 20.5

    Pair<string, char> p2("Hello", 'A');
    p2.display();  // Output: Hello and A

    return 0;
}
