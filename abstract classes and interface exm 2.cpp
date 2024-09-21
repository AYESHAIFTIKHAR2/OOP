#include <iostream>
using namespace std;
// Base class
class Vehicle {
public:

    // Pure virtual function to be overridden in derived classes
    virtual int getNumberOfWheels() = 0;
};

// Derived class: Car
class Car : public Vehicle {
public:
    // Override the pure virtual function
    int getNumberOfWheels()  override {
     return 4; // A car typically has 4 wheels
    }
};

// Derived class: Bike
class Bike : public Vehicle {
public:
    // Override the pure virtual function
    int getNumberOfWheels()  override {
        return 2; // A bike typically has 2 wheels
    }
};

int main() {
    // Create instances/objects of Car and Bike
    Car myCar;
    Bike myBike;

    // Array of Vehicle pointers
    Vehicle* vehicles[2];
    vehicles[0] = &myCar;
    vehicles[1] = &myBike;

    // Display the number of wheels for each vehicle
    for (int i = 0; i < 2; ++i) {
        cout << "Vehicle " << i + 1   << " has " << vehicles[i]->getNumberOfWheels() << " wheels." << endl;
    }
    return 0;
}
