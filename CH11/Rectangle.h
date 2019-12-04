#ifndef Rectangle_H
#define Rectangle_H

class Rectangle {
private:
	double l, w;
public:
	Rectangle(double length, double width);
	double getL();
	double getW();
	double area();
	double perimeter();
	void print();
};

#endif
