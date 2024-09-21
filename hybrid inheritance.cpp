#include<iostream>
using namespace std;
class teacher
{
	public:
		void teach()
		{
			cout<<"he is teaching"<<endl;
		}
};
class GR: public teacher
{
	public:
		void girls()
		{
			cout<< "she is girls's representative"<<endl;
		}
};
class CR: public teacher
{
	public:
		void IT()
		{
			cout<<"he is class representative"<<endl;
		}
};
class student: public GR,public CR
{
	public:
		void learn()
		{
		cout<<"they are learning"<<endl;	
		}
		void write()
		{
			CR :: teach();
			GR :: teach();
		}
};
int main()
{
	student a1;
	a1.learn();
	a1.write();
	a1.IT();
}