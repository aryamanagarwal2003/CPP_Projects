#include <iostream>
#include <algorithm> // For std::copy
//using namespace std;

class DynamicArray {
private:
    int* data;
    size_t size;
    int id;
    std::string name;

public:
    // Default Constructor
    DynamicArray() : data(nullptr), size(0),id(0),name("") {
        std::cout << "Default constructor called." << std::endl;
    }

    // Parameterized Constructor
    DynamicArray(size_t sz, int initialValue, int id, std::string name) {
        std::cout << "Parameterized constructor called." << std::endl;
        size = sz;
        this->name = name;
        this->id = id;
        data = new int[size];
        std::fill(data, data + size, initialValue);
    }

    // Copy Constructor
    DynamicArray(const DynamicArray& other) : size(other.size) {
        std::cout << "Copy constructor called." << std::endl;
        this->id = other.id;
        this->name = other.name;
        data = new int[size];
        std::copy(other.data, other.data + size, data);
    }

    // Destructor
    ~DynamicArray() {
        std::cout << "Destructor called." << std::endl;
        delete[] data;
    }

    // A simple utility function to print the array contents
    void print() const {
        for (size_t i = 0; i < size; ++i)
            std::cout << data[i] << " ";
        std::cout << std::endl;
    }
};

int main() {
    // Using the default constructor
    DynamicArray defaultArray;
    defaultArray.print();  // Should print nothing as size is 0

    // Using the parameterized constructor
    DynamicArray paramArray(5, 6, 10, "abcd");
    paramArray.print();

    // Using the copy constructor
    DynamicArray copyArray = paramArray;
    copyArray.print();  // Should print "10 10 10 10 10"

    // Trying to use the moved semantics (though only copy constructor will be called)
    DynamicArray movedArray = std::move(paramArray);
    movedArray.print();  // Should print "10 10 10 10 10"
    paramArray.print();  // Should also print "10 10 10 10 10" as it was copied not moved

    return 0;
}