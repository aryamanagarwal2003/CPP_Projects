#include <iostream>
using namespace std;
int main() {
    int x = 10;
    auto modify = [x]() mutable { x += 5; cout << "Inside lambda: " << x << endl; };
    modify();
    cout << "Outside lambda: " << x << endl;
    return 0;
}
