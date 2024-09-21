#include<iostream>
using namespace std;
class PaymentMethod 
{
public:
virtual void processPayment(double amount)=0;
virtual void refund (double amount)=0;
};
class CreditCard:public PaymentMethod
{
	public:
	void processPayment(double amount) override
    {
      cout << "Process the payment" <<amount<< endl;
    }
 void refund(double amount) override
  {
    cout << "Refund the amount" <<amount<< endl;
  }
};
class Paypal:public PaymentMethod
{
public:
	void processPayment(double amount) override
  { 
   cout << "Process the payment" <<amount<< endl;
  }
  void refund(double amount) override 
 {
   cout << "Refund the amount" <<amount<< endl;
 }
};
class BankTransfer:public PaymentMethod
{
 public:
	void processPayment(double amount) override
  {
    cout << "Process the payment" <<amount<< endl;
  }
  void refund(double amount) override
   {
    cout << "Refund the amount" <<amount<< endl;
   }
};
int main()
{
PaymentMethod* PM;
PM= new CreditCard;
PM->processPayment(200.0);
PM->refund(100.0);

PM=new Paypal;
PM->processPayment(300.0);
PM->refund(150.0);

PM=new BankTransfer;
PM->processPayment(400.0);
PM->refund(200.0);
}