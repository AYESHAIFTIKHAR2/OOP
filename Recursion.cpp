#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 1)  // Base case: factorial of 1 is 1
        return 1;
    else         // Recursive case
        return n * factorial(n - 1);
}

int main() {
    int number = 5;  // You can change this to calculate factorial of any number
    cout << "Recursive factorial of " << number << " is: " << factorial(number) << endl;
    return 0;
}