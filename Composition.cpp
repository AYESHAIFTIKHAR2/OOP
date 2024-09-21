#include <iostream>
using namespace std;

class Engine {
public:
    void start() { cout << "Engine starts" << endl; }
};

class Car {
private:
    Engine engine; // Car "has an" Engine (Composition)
public:
    void drive() {
        engine.start();
        cout << "Car is moving" << endl;
    }
};

int main() {
    Car car;
    car.drive(); // Car uses its Engine to drive
    return 0;
}