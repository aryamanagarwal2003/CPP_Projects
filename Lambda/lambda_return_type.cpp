#include <iostream>
using namespace std;
int main() {
    auto divide = [](int a, int b) -> double { return (double)a / b; };
    cout << "Division: " << divide(5, 2) << endl;
    return 0;
}
