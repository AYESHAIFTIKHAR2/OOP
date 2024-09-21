#include <iostream>
using namespace std;
class Base
{
	virtual void show()=0;

};
class Derv1: public Base
{public:
	void show() override
	{
		cout<<"SHOW DERV1"<<endl;
	}
};
class Derv2 : public Base
{public:
	void show() override
	{
		cout<<"SHOW DERV2"<<endl;
	}
};
int main()
{
	Derv1 d1;
	d1.show();
	Derv2 d2;
	d2.show();
}