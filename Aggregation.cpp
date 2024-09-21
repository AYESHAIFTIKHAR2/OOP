#include <iostream>
using namespace std;

class Engine {
public:
    Engine() { cout << "Engine created" << endl; }
    ~Engine() { cout << "Engine destroyed" << endl; }
    
    void start() { cout << "Engine starts" << endl; }
};

class Car {
private:
    Engine* engine;  // Aggregation: Car does not own the Engine, just holds a pointer to it
public:
    // Constructor takes an Engine pointer as an argument
    Car(Engine* eng) : engine(eng) { cout << "Car created" << endl; }
    
    ~Car() { 
        cout << "Car destroyed" << endl;
        // Note: We do not delete the engine pointer, because Car does not own it
    }
    
    void drive() { engine->start(); }
};

int main() {
    Engine* eng = new Engine(); // Engine created dynamically
    Car myCar(eng);             // Car is created and uses the Engine

    myCar.drive();              // Car uses Engine to drive

    // Destroying the Car object, but the Engine is not destroyed automatically
    // because Car does not own it
    return 0;
}