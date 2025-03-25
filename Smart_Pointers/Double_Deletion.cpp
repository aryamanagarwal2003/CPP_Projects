#include <iostream>
#include <memory>

class DoubleDeleteFixed {
private:
    std::unique_ptr<int> data;
public:
    DoubleDeleteFixed() : data(std::make_unique<int>(5)) {
        std::cout << "Memory allocated safely.\n";
    }
};

int main() {
    std::unique_ptr<DoubleDeleteFixed> obj = std::make_unique<DoubleDeleteFixed>();
    return 0;
}