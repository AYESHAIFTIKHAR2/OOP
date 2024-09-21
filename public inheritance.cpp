#include <iostream>
using namespace std;
 class A
{public:
int a;
protected:
int b;
private:
int c;};

class B  : public A
{
public:
void set()
{cout<<"enter a="<<endl;
cin>>a;
cout<<"enter b="<<endl;
cin>>b;}
void display()
{
cout<<"a="<<a<<endl;
cout<<"b="<<b;
cout<<endl;}
};
int main()
{ 
B obj2;
obj2.set();
obj2.display();
}