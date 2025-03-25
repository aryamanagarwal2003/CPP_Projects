#include <iostream>
using namespace std;


class String {
private:
    char* str;
public:
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Overloading Assignment Operator
    String& operator=(const String& other) {
        if (this != &other) {  // Self-assignment check
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    void display() { cout << str << endl; }
    ~String() { delete[] str; }
};

int main() {
    String s1("Hello");
    String s2("World");
    s2 = s1;  // Shallow copy issue
    s1.display();
    s2.display();  // Both refer to the same memory
    return 0;
}