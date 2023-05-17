#include "Triangle.h"

Triangle::Triangle(int a= 0, int b = 0) : Shape{a,b}
{
}

int Triangle::area()
{	
	cout << "衍生類別Triangle面積公式： " << width * height << endl;
	return (width * height)/2;
}
