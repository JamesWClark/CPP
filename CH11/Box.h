#ifndef Box_H
#define Box_H

#include "Rectangle.h"

class Box : public Rectangle {
private:
	double h;
public:
	Box(double length, double width, double height);
	double area();
	double perimeter();
	double volume();
	void print();
};

#endif
