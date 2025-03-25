#include <iostream>
#include <memory>

class SafePointer {
private:
    std::unique_ptr<int> data;
public:
    SafePointer() : data(std::make_unique<int>(5)) {
        std::cout << "Memory allocated safely.\n";
    }
    void showData() {
        std::cout << "Value: " << *data << "\n";
    }
};

int main() {
    std::unique_ptr<SafePointer> obj = std::make_unique<SafePointer>();
    obj->showData(); 
    return 0;
}