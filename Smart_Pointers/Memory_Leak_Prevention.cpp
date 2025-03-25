#include <iostream>
#include <memory>

class MemoryLeakFixed {
private:
    std::unique_ptr<int> data;
public:
    MemoryLeakFixed() : data(std::make_unique<int>(10)) {
        std::cout << "Memory allocated safely.\n";
    }
};

int main() {
    std::unique_ptr<MemoryLeakFixed> obj = std::make_unique<MemoryLeakFixed>();
    return 0; // Memory is freed automatically
}