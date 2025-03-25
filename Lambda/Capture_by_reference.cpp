#include <iostream>
using namespace std;
int main() {
    int x = 10;
    auto modifyX = [&x]() { x += 5; };
    modifyX();
    cout << "Modified x: " << x << endl;
    return 0;
}
