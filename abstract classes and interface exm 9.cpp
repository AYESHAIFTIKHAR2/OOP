#include <iostream>
#include <cmath> // for M_PI
using namespace std;

// Abstract class Shape
class Shape {
public:
    virtual void draw() const = 0;        // Pure virtual function to draw the shape
    virtual double getArea() const = 0;   // Pure virtual function to calculate the area

};

// Circle class derived from Shape
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    void draw() const override {
        cout << "Drawing a circle with radius: " << radius << endl;
    }

    double getArea() const override {
        return M_PI * radius * radius;
    }
};

// Rectangle class derived from Shape
class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() const override {
        cout << "Drawing a rectangle with width: " << width << " and height: " << height << endl;
    }

    double getArea() const override {
        return width * height;
    }
};

// Triangle class derived from Shape
class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    void draw() const override {
        cout << "Drawing a triangle with base: " << base << " and height: " << height << endl;
    }

    double getArea() const override {
        return 0.5 * base * height;
    }
};

int main() {
    // Create instances of each shape
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(4.0, 5.0);

    // Array of pointers to Shape
    Shape* shapes[] = {&circle, &rectangle, &triangle};

    // Loop through each shape, draw it, and display its area
    for (const auto& shape : shapes) {
        shape->draw();
        cout << "Area: " << shape->getArea() << endl;
        cout << endl;
    }

    return 0;
}
