#include "Rectangle.h"
#include "Box.h"

int main() {
	Rectangle r1(20, 20);
	Rectangle r2(40, 40);
	Rectangle r3 = r1 + r2;
	r3.print();
}