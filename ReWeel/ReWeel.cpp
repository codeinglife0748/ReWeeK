#include <iostream>
using namespace std;

int absolute(int var) {
    if (var < 0) var = -var;
    return var;
}

double absolute(double var) {
    if (var < 0) var = -var;
    return var;
}

void display(int var) {
    cout << "整數為：" << var << endl;
}

void display(double var) {
    cout << "浮點數為：" << var << endl;
}

void display(int var1, double var2) {
    cout << "整數為：" << var1 << endl;
    cout << "浮點數為：" << var2 << endl;
}

int main()
{
    int a;
    double b;

    cout << "請輸入整數值a :";
    cin >> a;
    cout << "請輸入浮點數值b :";
    cin >> b;
    cout << a << "的絕對值為 " << absolute(a) << endl;
    cout << b << "的絕對值為 " << absolute(b) << endl;

    display(a);
    display(b);
    display(a, b);
}