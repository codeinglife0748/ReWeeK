#include <iostream>
using namespace std;

void swap(int& x, int& y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int i = 5;
    double d;

    int& i_ref = i;
    int& d_ref = d;

    cout << "value of i = " << i << endl;
    cout << "value of i reference = " << i_ref << endl;
    cout << endl;

    i_ref = 10;
    cout << "change i_ref=10" << endl;
    cout << "value of i = " << i << endl;
    cout << "value of i reference = " << i_ref << endl;
    cout << endl;

    int a = 100;
    int b = 200;
    cout << "swap前，a = " << a << endl;
    cout << "swap前，b = " << b << endl;
    swap(a, b);
    cout << "swap後，a = " << a << endl;
    cout << "swap後，b = " << b << endl;
}