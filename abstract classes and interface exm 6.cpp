#include <iostream>
using namespace std;

// Abstract base class
class Account {
protected:
    double balance;
public:
    Account(double bal) : balance(bal) {}

    // Pure virtual function
    virtual void calculateInterest() = 0;

};

// Derived class for SavingsAccount
class SavingsAccount : public Account {
private:
    double annualInterestRate;
public:
    SavingsAccount(double bal, double rate) : Account(bal), annualInterestRate(rate) {}

    void calculateInterest() override {
        double interest = balance * (annualInterestRate / 100);
        cout << "Savings Account Interest: $" << interest << endl;
    }
};

// Derived class for CheckingAccount
class CheckingAccount : public Account {
private:
    double fixedInterest;
public:
    CheckingAccount(double bal, double interest) : Account(bal), fixedInterest(interest) {}

    void calculateInterest() override {
        cout << "Checking Account Interest: $" << fixedInterest << endl;
    }
};

int main() {
    // Creating objects for SavingsAccount and CheckingAccount
    SavingsAccount savings(1000.0, 2.5);
    CheckingAccount checking(2000.0, 50.0);

    // Array of pointers to Account
    Account* accounts[2];

    // Assigning the addresses of the derived objects
    accounts[0] = &savings;
    accounts[1] = &checking;

    // Calculating and displaying interest for each account using polymorphism
    for (int i = 0; i < 2; ++i) {
        accounts[i]->calculateInterest();
    }

    return 0;
}
