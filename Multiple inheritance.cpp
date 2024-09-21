#include <iostream>
using namespace std;
 class A
{
private:
int a;
public:
void input()
{
cout<<"enter value "<<endl;
cin>>a;
}
void output ()
{
cout<<"The value of a is"<<a<<endl;}
};
class B
{
private:
int b;
public:
void input()
{
cout<<"enter value "<<endl;
cin>>b;
}
void output ()
{cout<<"The value of b is"<<b<<endl;}
};
class  C :public A,public B
{
private:
int c;
public:
void get()
{
A::input();
B::input();
cout<<"enter value "<<endl;
cin>>c;}
void show()
{A::output();
B::output();
cout<<"The value of c is"<<c<<endl;}};
int main()
{ 
C obj;
obj.get();
obj.show();
}