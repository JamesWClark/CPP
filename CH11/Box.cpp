#include <iostream>
#include "Rectangle.h"
#include "Box.h"

Box::Box(double length, double width, double height) : Rectangle(length, width) {
	h = height;
}

double Box::area() {
	return 2 * (getL() + getW()) + 2 * (getW() + h) + 2 * (getL() + h);
}

double Box::perimeter() {
	return 4 * (getL() + getW() + h);
}

double Box::volume() {
	return Rectangle::area() * h;
}

void Box::print() {
	std::cout << "Box: " 
		<< "ID = " << getID()
		<< ", Area = " << area()
		<< ", Perimeter = " << perimeter() 
		<< ", Volume = " << volume() << std::endl;
}