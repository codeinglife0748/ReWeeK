
#include <iostream>
#include<iomanip>
#include<bitset>
#include<string.h>
#include<string>
#include"Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
	Shape shape(10, 5);
	shape.area();

	Rectangle rec(3, 5);
	rec.area();

	Triangle tri(3, 5);
	tri.area();

	Shape* shape2 = nullptr;
	shape2 = &rec;
	shape2->area();

	shape2 = &tri;
	shape2->area();
    return 0;
}

