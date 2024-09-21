#include <iostream>
#include <cmath>    // For mathematical functions

// Abstract base class
class Shape {
public:
    // Pure virtual functions
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override area function
    double area() const override {
        return M_PI * radius * radius;  // Area = p * r^2
    }

    // Override perimeter function
    double perimeter() const override {
        return 2 * M_PI * radius;  // Perimeter = 2 * p * r
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override area function
    double area() const override {
        return length * width;  // Area = length * width
    }

    // Override perimeter function
    double perimeter() const override {
        return 2 * (length + width);  // Perimeter = 2 * (length + width)
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double a;  // Side 1
    double b;  // Side 2
    double c;  // Side 3

public:
    // Constructor
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    // Override area function using Heron's formula
    double area() const override {
        double s = (a + b + c) / 2;  // Semi-perimeter
        return std::sqrt(s * (s - a) * (s - b) * (s - c));  // Area = sqrt(s * (s - a) * (s - b) * (s - c))
    }

    // Override perimeter function
    double perimeter() const override {
        return a + b + c;  // Perimeter = side1 + side2 + side3
    }
};

int main() {
    // Create objects for Circle, Rectangle, and Triangle
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0, 5.0);

    // Display area and perimeter for Circle
    std::cout << "Circle:" << std::endl;
    std::cout << "Radius: 5.0" << std::endl;
    std::cout << "Area: " << circle.area() << std::endl;
    std::cout << "Perimeter: " << circle.perimeter() << std::endl << std::endl;

    // Display area and perimeter for Rectangle
    std::cout << "Rectangle:" << std::endl;
    std::cout << "Length: 4.0, Width: 6.0" << std::endl;
    std::cout << "Area: " << rectangle.area() << std::endl;
    std::cout << "Perimeter: " << rectangle.perimeter() << std::endl << std::endl;

    // Display area and perimeter for Triangle
    std::cout << "Triangle:" << std::endl;
    std::cout << "Sides: 3.0, 4.0, 5.0" << std::endl;
    std::cout << "Area: " << triangle.area() << std::endl;
    std::cout << "Perimeter: " << triangle.perimeter() << std::endl;

    return 0;
}
