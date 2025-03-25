#include <iostream>
using namespace std;

void executeLambda(int a, int b, auto func) {
    cout << "Lambda Result: " << func(a, b) << endl;
}

int main() {
    auto sum = [](int x, int y) { return x + y; };
    executeLambda(7, 8, sum);
    executeLambda(5, 10, [](int x, int y) { return x * y; });  // Inline lambda
    return 0;
}
