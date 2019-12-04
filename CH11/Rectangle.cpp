#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(double length, double width) {
	l = length;
	w = width;
}

double Rectangle::getL() {
	return l;
}

double Rectangle::getW() {
	return w;
}

double Rectangle::area() {
	return l * w;
}

double Rectangle::perimeter() {
	return 2 * l + 2 * w;
}

void Rectangle::print() {
	std::cout << "Rectangle: " 
		<< "Area = " << area()
		<< ", Perimeter = " << perimeter() << std::endl;
}
