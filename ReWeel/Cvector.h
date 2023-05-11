#pragma once
class Cvector
{
	int x, y;
public:
	Cvector();
	~Cvector();
	Cvector(int, int);
	void print();
	static int count;
	Cvector operator +(const Cvector&);
	Cvector* operator +(const Cvector*);

};


