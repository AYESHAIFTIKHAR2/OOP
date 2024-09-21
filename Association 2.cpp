#include <iostream>
#include <string>
using namespace std;
class Car {
private:
 string name;
public:
 Car(const string& model) : name(model) {}
 
 void startEngine() const {
 cout << name << " engine started." << std::endl;
 }
 
 std::string getMake() const {
 return name;
 }
};
class Driver {
public:
 Driver(const string& driver) : name(driver) {}
 void drive(const Car& car) const {std::cout << name << " is driving the " << car.getMake() << 
"." << std::endl;
 car.startEngine();
 }
private:
 std::string name;
};
int main() {
 Car car("Toyota");
 Driver driver("Sunny");
 
 driver.drive(car);
 
 return 0;
} 