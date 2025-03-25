#include<iostream>
using namespace std;

struct MyStruct {
    char a;     // 1 byte
    int b;      // 4 bytes
    char c;     // 1 byte
};

#pragma pack(push, 1)  // Align to 1-byte boundaries
struct PackedStruct {
    char a;     // 1 byte
    int b;      // 4 bytes, no padding added before this member
    char c;     // 1 byte
};
#pragma pack(pop)      // Reset to the default alignment

int main() {
    std::cout << "Size of MyStruct: " << sizeof(MyStruct) << std::endl;
    std::cout << "Size of PackedStruct: " << sizeof(PackedStruct) << std::endl;

    return 0;
}