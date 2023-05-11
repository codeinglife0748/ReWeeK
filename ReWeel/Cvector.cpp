#include "Cvector.h"
#include "Cvector.h"
#include "Cvector.h"

Cvector::Cvector()
{
	x = 0;
	y = 0;
    
}

Cvector::~Cvector()
{
	count;
}

Cvector::Cvector(int a, int b) :x(a), y(b)
{
}

void Cvector::print()
{
	cout <<x<<","<<y << endl;
}

}

Cvector Cvector::operator+(const Cvector& vec)
{
	Cvector result;
	result.x + vec.x;
	result.x + vec.y;
	return Cvector();
}

Cvector* Cvector::operator+(const Cvector* pvec)
{
	Cvector* result = new Cvector();
	result-> = this->x + pvec->x;
	result-> = this->x + pvec->y;
	return Cvector;
}
