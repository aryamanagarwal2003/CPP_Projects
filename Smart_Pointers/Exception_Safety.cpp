#include <iostream>
#include <memory>


void safeFunction() {
    std::unique_ptr<int> obj = std::make_unique<int>(10);
    throw std::runtime_error("Error occurred!"); 
}

int main() {
    try {
        safeFunction();
    }
    catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << "\n";
    }
    return 0;
}