#include "Shape.h"

Shape::Shape(int a = 0, int b =0)
{
	width = a;
	height = b;
}

int Shape::area()
{
	cout << "基底類別Shape面積公式" << width * height << endl;
	return width * height;
}
