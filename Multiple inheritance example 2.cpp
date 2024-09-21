#include <iostream>
using namespace std;
 class  student
{protected:
int rollno;
public:
void get_number(int a)
{
rollno=a;}
void put_number()
{
cout<<"ROLL NO"<<rollno<<endl;
}
};
class test 
{
protected:
float sub1;
float sub2;
public:
void get_marks(float x,float y)
{ 
sub1=x;
sub2=y;
}
void put_marks()
{
cout<<"MARKS OBTAINBED"<<endl;
cout<<"SUB 1 :"<< sub1<<endl;
cout<<"SUB 2 :"<<sub2<<endl;
}
};
class result: public test,public student
{
float total;
public:
void display ()
{
total=sub1 + sub2;
put_number();
put_marks();
cout<<"total ="<<total<<endl;
}
};
int main()
{
result student_1;
student_1.get_number(35);
student_1.get_marks(29.5,30.0);
student_1.display ();
}