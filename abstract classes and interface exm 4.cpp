#include <iostream>
using namespace std;
class Employee
{public:
	virtual void calculateSalary()=0;
};
class FulltimeEmployee : public Employee
{public:
	void calculateSalary() override
	{
		cout<<" salary of full time employee is 40,000"<<endl;
	}
};
class HalftimeEmployee : public Employee
{	public:
		void  calculateSalary() override
		{
			cout<<" salary of half time employee is 20,000"<<endl;
		}
};
int main()
{
	FulltimeEmployee f;
	f.calculateSalary();
     HalftimeEmployee h;
     h.calculateSalary();
 }