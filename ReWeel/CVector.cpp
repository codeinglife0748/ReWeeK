#include "CVector.h"
#include<iostream>
CVector::CVector()
{
	x = 0;
	y = 0;
	count++;
}
CVector::~CVector()
{
	count--;
}
CVector::CVector(int a, int b) : x{ a }, y{ b }
{
	std::cout << x << "," << y << endl;
}