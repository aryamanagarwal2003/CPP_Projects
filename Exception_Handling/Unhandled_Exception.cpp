#include <iostream>
#include <stdexcept>

class Test {
public:
    Test(const std::string& name) : name(name) {
        std::cout << "Constructor: " << name << std::endl;
    }

    ~Test() {
        std::cout << "Destructor: " << name << std::endl;
    }

private:
    std::string name;
};

void functionC() {
    Test c("C");
    throw std::runtime_error("Exception thrown in functionC");  // Uncaught exception
}

void functionB() {
    Test b("B");
    functionC();  // functionC throws, functionB does not catch it
}

void functionA() {
    Test a("A");
    functionB();  // functionB does not catch the exception either
}

int main() {
    functionA();  // No try-catch, exception remains uncaught
    return 0;
}