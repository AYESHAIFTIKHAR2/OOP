#include <iostream>
#include <string>
using namespace std;

class PaymentProcessor {
public:
    // Overloaded function for Net Banking
    void processPayment(double amount, const string& bankName) {
        cout << "Processing Net Banking payment of $" << amount 
             << " through bank " << bankName << "." << endl;
    }

    // Overloaded function for Cash on Delivery (COD)
    void processPayment(double amount) {
        cout << "Processing Cash on Delivery payment of $" << amount << "." << endl;
    }

    // Overloaded function for Credit Card
    void processPayment(double amount, const string& cardNumber, const string& cardHolderName) {
        cout << "Processing Credit Card payment of $" << amount 
             << " using card number " << cardNumber 
             << " held by " << cardHolderName << "." << endl;
    }
};

int main() {
    PaymentProcessor payment;

    // Processing payments with different methods
    payment.processPayment(100.0, "Punjab bank");  // Net Banking
    payment.processPayment(50.0);                      // Cash on Delivery
    payment.processPayment(200.0, "1234-5678-9876-5432", "John Doe");  // Credit Card

    return 0;
}