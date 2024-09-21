#include <iostream>
#include <string>
using namespace std;
// Abstract base class
class Fruit {
public:
    // Pure virtual functions
    virtual string taste()  = 0;
    virtual string eatingMethod() = 0;

};

// Derived class Apple
class Apple : public Fruit {
public:
    // Override pure virtual functions
    string taste() override {
        return "sweet and crisp";
    }

    string eatingMethod() override {
        return "eat fresh or make apple pie";
    }

    // Method to show specific color of Apple
    string color() {
        return "red or green";
    }
};

// Derived class Banana
class Banana : public Fruit {
public:
    // Override pure virtual functions
    string taste()  override {
        return "sweet and soft";
    }

    string eatingMethod()  override {
        return "eat fresh or use in smoothies";
    }

    // Method to show specific color of Banana
    string color()  {
        return "yellow";
    }
};

int main() {
    // Create instances of Apple and Banana
    Apple apple;
    Banana banana;

    // Display information for Apple
    cout << "___________Apple____________ " << endl;
    cout << "Taste: " << apple.taste() << endl;
    cout << "Eating Method: " << apple.eatingMethod() << endl;
    cout << "Color: " << apple.color() << endl << endl;

    // Display information for Banana
    std::cout << "_______Banana___________" << endl;
    std::cout << "Taste: " << banana.taste() << endl;
    std::cout << "Eating Method: " << banana.eatingMethod() << std::endl;
    std::cout << "Color: " << banana.color() << endl;

    return 0;
}
