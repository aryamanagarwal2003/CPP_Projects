#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;
public:
    Engine(int hp) : horsepower(hp) {}
    friend class Car;  // Declare Car as a friend class
};

class Car {
public:
    void showEnginePower(Engine e) {
        cout << "Engine Power: " << e.horsepower << " HP" << endl;  // ✅ Accessing private data
    }
};

int main() {
    Engine engine(250);
    Car car;
    car.showEnginePower(engine);  // ✅ Works due to friend class
    return 0;
}
