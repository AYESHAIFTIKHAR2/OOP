#include <iostream>
using namespace std;
class BGNU
{
int f;
int m;
public:
void fee()
{
cout<<"Enter fee"<<endl;
cin>>f;}
void merit()
{cout<<"Enter merit"<<endl;
cin>>m;
}
virtual void sports ()=0;
virtual void transport ()=0;
virtual void scholarship ()=0;
};
class CSIT: public BGNU
{
int s;
int t;
public:
 void sports() override
{
cout<<"Enter sports for CSIT"<<endl;
cin>>s;
}
void transport() override
{
cout<<" Enter transport for CSIT"<<endl;
cin>>t;
}
};
class course: public CSIT
{int sc;
public:
void scholarship () override
{
cout<<"enter scholarship  for CSIT course"<<endl;
cin>>sc;
}
};
int main()
{
course obj;
obj.fee();
obj.merit();
obj.sports ();
obj.transport ();
obj.scholarship ();
}