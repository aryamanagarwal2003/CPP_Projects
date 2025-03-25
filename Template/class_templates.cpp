#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T arr[5];  // Fixed-size array for simplicity
    int top;
public:
    Stack() { top = -1; }

    void push(T value) {
        if (top == 4) { cout << "Stack Overflow!" << endl; return; }
        arr[++top] = value;
    }

    T pop() {
        if (top == -1) { cout << "Stack Underflow!" << endl; return 0; }
        return arr[top--];
    }

    void display() {
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> intStack;  // Integer Stack
    intStack.push(10);
    intStack.push(20);
    intStack.display();  // Output: 10 20

    Stack<double> doubleStack;  // Double Stack
    doubleStack.push(1.1);
    doubleStack.push(2.2);
    doubleStack.display();  // Output: 1.1 2.2

    return 0;
}
