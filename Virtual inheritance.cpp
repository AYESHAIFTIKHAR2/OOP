#include <iostream>
using namespace std;
class A {
public:
    void foo() { cout << "A"; }
};
class B : virtual public A
 { 
 void foo()
  {cout<<"C";}
  };
class C : virtual public A 
  { 
  void foo()
  {cout<<"B";}
  };
class D : public B, public C
 {
 	public:
 void foo() { cout << "D"; }
 };

int main() {
    A d;
    d.foo();
    return 0;
}
