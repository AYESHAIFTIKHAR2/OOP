#include <iostream>
using namespace std;

class Driver {
public:
    void drive() {
        cout << "Driver is driving the car." << endl;
    }
};

class Car {
public:
    void driveCar(Driver &driver) {
    driver.drive();     // Car uses the driver to drive
    }
};

int main() {
    Driver myDriver;  // Create a Driver object
    Car myCar;        // Create a Car object

    // Car asks the driver to drive
    myCar.driveCar(myDriver);

    return 0;
}