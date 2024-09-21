#include<iostream>
using namespace std;
class Shape
{public:
	virtual double calculateArea()=0;
};
class Square : public Shape
{
double side;
public:
	Square(double s): side(s){
	}
    double calculateArea() override
     {
     	return side*side;
	 }
};
	class Triangle: public Shape
{
double height;
double width;
public:
	Triangle(double h, double w):height(h),width(w)
	{
	}
	double calculateArea() override
	{
		return 0.5*height*width;
	}
	};
	int main()
	{
		Square sq(7.0);
		Triangle tri(9,10);
		Shape*shapes[2];
		shapes[0]=&sq;
		shapes[1]=&tri;
	for(int i=0;i<2;i++)
		cout << "Area of shape " << (i + 1) << " is " << shapes[i]->calculateArea()<<endl;
	
	}