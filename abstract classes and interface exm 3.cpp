#include <iostream>
using namespace std;
class Shape
{public:
	virtual void draw()=0;
};
class circle : public Shape
{public:
	void draw() override
	{
		cout<<" DRAW A CIRCLE"<<endl;
	}
};
class rectangle : public Shape
{	public:
		void draw() override
		{
			cout<<" DRAW A RECTANGLE"<<endl;
		}
};
int main()
{
	circle cir;
	rectangle rec;
	Shape *shapes[2];
	shapes[0]=&cir;
	shapes[1]=&rec;
	for (int i = 0; i < 2; ++i) 
     shapes[i]->draw();

}