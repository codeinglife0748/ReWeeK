#include "Triangle.h"

Triangle::Triangle(int a= 0, int b = 0) : Shape{a,b}
{
}

int Triangle::area()
{	
	cout << "�l�����OTriangle���n�����G " << width * height << endl;
	return (width * height)/2;
}
