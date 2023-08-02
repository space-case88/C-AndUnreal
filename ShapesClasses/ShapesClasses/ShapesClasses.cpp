#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape {
protected:
	string color;

public:
	Shape(const string& color) : color(color) {}

	virtual double getArea() const {
		return 0.0;
	}
};

class Rectangle : public Shape {
protected:
	double height;
	double width;

public:
	Rectangle(const string& color, double height, double width) : Shape(color), height(height), width(width) {}

	double getArea() const override {
		return height * width;
	}
};

class Triangle : public Shape {
protected:
	double base;
	double height;

public:
	Triangle(const string& color, double base, double height) : Shape(color), base(base), height(height) {}

	double getArea() const override {
		return height * base;
	}
};

class Circle : public Shape {
protected:
	double radius;

public:
	Circle(const string& color, double radius) : Shape(color), radius(radius) {}

	double getArea() const override {
		return M_PI * pow(radius, 2);
	}
};

int main() {
	Rectangle rect("Blue", 4.0, 5.0);
	Triangle triangle("Green", 6.0, 8.0);
	Circle circle("Red", 3.0);

	cout << "Rectangle Area: " << rect.getArea() << endl;
	cout << "Triangle Area: " << triangle.getArea() << endl;
	cout << "Circle Area: " << circle.getArea() << endl;

	return 0;
}
