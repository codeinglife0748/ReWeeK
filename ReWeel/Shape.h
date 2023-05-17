#pragma once
#include<iostream>
using namespace std;

class Shape
{
public:
	Shape(int, int);

	// static linkage, early binding
	int area();

	//dynamic linkage, late binding
	//virtual int area();

	//pure virtual function
	//virtual int area() = 0;
protected:
	int width, height;
};

