#include <iostream>
using namespace std;

class Box {
private:
    int width;
public:
    Box(int w) : width(w) {}
    friend void printWidth(Box b); // Friend function declaration
};

void printWidth(Box b) {  // Friend function definition (outside class)
    cout << "Width: " << b.width << endl;  // Accessing private member
}

int main() {
    Box box1(50);
    printWidth(box1);  // Works due to friend function
    return 0;
}