#include <iostream>
#include <memory>


class SharedExample {
public:
    SharedExample() { std::cout << "SharedExample Constructor\n"; }
    ~SharedExample() { std::cout << "SharedExample Destructor\n"; }
};

void func(std::shared_ptr<SharedExample> ptr) {
    std::cout << "Function received shared pointer.\n";
}

int main() {
    std::shared_ptr<SharedExample> obj = std::make_shared<SharedExample>();
    func(obj); // Multiple shared_ptr instances share ownership
    return 0;
}