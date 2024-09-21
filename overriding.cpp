#include <iostream>
using namespace std;

class Animal {
public:
    void walk() {
        cout << "Animal is walking" << endl;
    }
};

class Dog {
public:
    void walk() {
        cout << "Dog is walking" << endl;
    }
};

class BabyDog : public Animal, public Dog {
public:
    void walk() {
        Animal::walk();
        Dog::walk();
        cout << "BabyDog is walking" << endl;
    }
};

int main() {
    BabyDog obj;
    obj.walk();
    return 0;
}