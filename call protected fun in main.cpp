#include <iostream>
using namespace std;

class Animal {
public:
    int a = 10;
    int h = 5;
    
    void Eat() {
        cout << "a = " << a << endl;
    }

protected:
    void run() {
        cout << "h = " << h << endl;
    }
};

class Dog : protected Animal {
public:
    void Bark() {
        cout << "b = " << h << endl;
    }
};

int main() {
    Dog b;
    b.Eat();  // calling public function from Animal class
    b.Bark(); // calling protected function from Dog class
    return 0;
}