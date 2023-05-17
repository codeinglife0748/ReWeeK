#include "Rectangle.h"

Rectangle::Rectangle(int a = 0, int b = 0) : Shape{a ,b}
{

}

int Rectangle::area()
{
	cout << "衍生類別Rectangle面積公式： " << width * height << endl;
	return width * height;
}
