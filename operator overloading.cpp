#include <iostream>
using namespace std;

class complex {
private:
    float r, i;  // 'r' for the real part, 'i' for the imaginary part
public:
    // Constructor with parameters
    complex(float r, float i) {
        this->r = r; 
        this->i = i;
    }
    
    // Default constructor
    complex() {}

    // Function to display real and imaginary parts
    void displaydata() {
        cout << "Real part = " << r << endl;
        cout << "Imaginary part = " << i << endl;
    }

    // Overloading the + operator to add two complex numbers
    complex operator+(complex c) {
        return complex(r - c.r, i - c.i);
    }
};

int main() {
    // Creating two complex number objects
    complex a(2, 3);  // 2 + 3i
    complex b(3, 4);  // 3 + 4i

    // Adding the two complex numbers
    complex c = a + b;  // This uses the overloaded + operator

    // Displaying the result
    c.displaydata();  // Should display 5 + 7i

    return 0;
}