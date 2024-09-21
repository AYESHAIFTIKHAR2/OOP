#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        // Calling virtual function in the base class constructor
        cout << "Base class constructor" << endl;
        call();  // Calls Base::call() even though the object might be derived
    }

    virtual ~Base() {
        // Calling virtual function in the base class destructor
        cout << "Base class destructor" << endl;
        call();  // Calls Derived::call() if the destructor is called for a derived object
    }

    virtual void call() const {
        cout << "Base class call function" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor" << endl;
        call();
    }

    virtual ~Derived() {
        cout << "Derived class destructor" << endl;
    }

    virtual void call() const override {
        cout << "Derived class call function" << endl;
    }
};

int main() {
    Derived d;
    return 0;
}