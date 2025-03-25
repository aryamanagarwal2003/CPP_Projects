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
    throw std::runtime_error("Exception thrown in functionC");
}

void functionB() {
    Test b("B");
    functionC();  // Call functionC which throws an exception
}

void functionA() {
    Test a("A");
    try {
        functionB();  // Call functionB which calls functionC
    }
    catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
}

int main() {
    functionA();
    return 0;
}