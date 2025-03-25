#include <iostream>
#include <cstdlib>
using namespace std;

struct MemoryRecord {
    void* address;
    size_t size;
    MemoryRecord* next;
};

MemoryRecord* head = nullptr;  // Head of linked list

// Function to add an allocation to the tracking list
void addRecord(void* p, size_t size) {
    MemoryRecord* newNode = new MemoryRecord{ p, size, head };
    head = newNode;
}

// Function to remove an allocation from the tracking list
void removeRecord(void* p) {
    MemoryRecord* current = head;
    MemoryRecord* prev = nullptr;
    while (current) {
        if (current->address == p) {
            if (prev) {
                prev->next = current->next;
            }
            else {
                head = current->next;
            }
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
}

// Overloaded new operator
void* operator new(size_t size) {
    void* p = malloc(size);
    cout << "Overloaded new at " << p << ": (size: " << size << " bytes)" << endl;
    if (!p) throw bad_alloc();
    addRecord(p, size);
    return p;
}

// Overloaded delete operator
void operator delete(void* p) noexcept {
    if (p) {
        removeRecord(p);
        cout << "Overloaded delete at " << p << endl;
        free(p);
    }
}

// Overloaded new[] operator
void* operator new[](size_t size) {
    void* p = malloc(size);
    cout << "Overloaded new[] at " << p << ": (size: " << size << " bytes)" << endl;
    if (!p) throw bad_alloc();
    addRecord(p, size);
    return p;
}

// Overloaded delete[] operator
void operator delete[](void* p) noexcept {
    if (p) {
        removeRecord(p);
        cout << "Overloaded delete[] at " << p << endl;
        free(p);
    }
}

// Function to check for memory leaks
void checkLeak() {
    if (head) {
        cout << "Memory Leak Detected!" << endl;
        MemoryRecord* current = head;
        while (current) {
            cout << "Leaked: Address=" << current->address << ", Size=" << current->size << " bytes" << endl;
            current = current->next;
        }
    }
    else {
        cout << "No Memory Leak Detected!" << endl;
    }
}

int main() {
    int* x = new int;
    int* y = new int[5];
    int* z = new int;

    // delete x;
    // delete[] y;
    // delete z;

    checkLeak();
    return 0;
}
