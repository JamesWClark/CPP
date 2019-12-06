#include <iostream>
#include "Rectangle.h"

int Rectangle::id = 0;

Rectangle::Rectangle(double length, double width) {
	l = length;
	w = width;
	id++;
}

double Rectangle::getID() {
	return id;
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
		<< "ID = " << getID()
		<< ", Length = " << getL()
		<< ", Width = " << getW()
		<< ", Area = " << area()
		<< ", Perimeter = " << perimeter() << std::endl;
}

Rectangle Rectangle::operator+(Rectangle rec) {
	return Rectangle(l + rec.getL(), w + rec.getW());
}