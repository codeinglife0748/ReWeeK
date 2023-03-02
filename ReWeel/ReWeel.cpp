#include <iostream>
#include<iomanip>
#include<bitset>
using namespace std;
const double PI = 3.1415926;
int main()
{
    int num1 = 15;
    int num2 = 017;
    int num3 = 0x0f;
    int num4 = 0b00001111;
    int numtest = 250;
    cout << "num1 =" << num1 << endl;
    cout << "num2 =" << num2 << endl;
    cout << "num3 =" << num3 << endl;
    cout << "num4 =" << num4 << endl;
    cout << "numtest(16) =" << hex << numtest << endl;
    cout << "numtest(10) =" << oct << numtest << endl;
    cout << "numtest(8)  =" << dec << numtest << endl;
    cout << "numtest(2)  =" << bitset<2>(numtest) << endl;
    int a0;
    int a1{ 10 };
    int b0(15);
    cout << "size of b0 " << sizeof(b0) << endl;
    signed int e0 = 10;
    unsigned int e1 = -10;
    float fnum1{ 1.12345678901234567890 };
    double fnum2{ 1.12345678901234567890 };
    long double fnum3{ 1.12345678901234567890L };
    cout << setprecision(20);
    cout << "fnum1 =" << fnum1 << endl;
    cout << "fnum2 =" << fnum2 << endl;
    cout << "fnum3 =" << fnum3 << endl;
    bool bval1 = 5;
    bool bval2 = 0;
    cout << "bval1 " << boolalpha << bval1 << endl;
    cout << "bval2" << noboolalpha << bval2 << endl;
    auto var1{ 12 };
    auto var2 = 12.0;
    auto var3 = 12.0f;
    auto var4{ 'a' };
    cout << "int min: " << numeric_limits<int>::min << endl;
    cout << "int max: " << numeric_limits<int>::max << endl;
    cout << "unsigned int min: " << numeric_limits<unsigned int>::min << endl;
    cout << "unsigned int max: " << numeric_limits<unsigned int>::max << endl;
    cout << setfill('*') << setw(10) << numtest << endl;
    char k0 = 'A';
    char k1 = 65;
    cout << "k0 = " << k0 << endl;
    cout << "k1 = " << k1 << endl;
    const int  WIDTH = 15;
    cout << setfill(' ');
    cout.setf(ios::right);
    cout << setw(WIDTH / 2) << "半徑" << setw(WIDTH) << "圓周長" << endl;
    cout.setf(ios::fixed);
    for (double radius = 1; radius <= 6; radius += 0.5) {
        cout << setprecision(1) << setw(WIDTH / 2) << radius << setprecision(4) << setw(WIDTH) << 2 * PI * radius << endl;
    }
    int number1 = 7;
    int number2 = 3;
    cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
    cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
    cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
    cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
    cout << number1 << " % " << number2 << " = " << number1 % number2 << endl;
    cout << "number1 ++ = " << number1++ << endl;
    number1++;
    cout << "number1 ++ = " << ++number1 << endl;
    ++number1;

    cout << "number1(8) " << bitset<8>(number1) << endl;
    cout << "number2(8) " << bitset<8>(number2) << endl;
    cout << "number1 & number2 = " << bitset<8>(number1 & number2) << endl;
    cout << "number1 | number2 = " << bitset<8>(number1 | number2) << endl;
    cout << "number1 ^ number2 = " << bitset<8>(number1 ^ number2) << endl;
    cout << "~number1  = " << bitset<8>(~number1) << endl;
    cout << "!number1  = " << bitset<8>(!number1) << endl;
    bool j0 = false;
    bool j1 = true;
    cout << "j0 && j1 = " << (j0 && j1) << endl;
    cout << "j0 || j1 = " << (j0 || j1) << endl;
    cout << "j0 ^ j1 = " << (j0 ^ j1) << endl;
    cout << "!j0 = " << (!j0) << endl;
    cout << "~j0 = " << (~j0) << endl;


    cout << "number1 (decimal) = " << dec << number1 << endl;
    cout << "number1 (binary) = " << bitset<8>(number1) << endl;
    int number1a = (number1 << 1);
    int number1b = (number1 >> 1);
    cout << "number1 shift left  = " << number1a << endl;
    cout << "number1 shift left  = " << bitset<8>(number1a) << endl;
    cout << "number1 shift right = " << number1b << endl;
    cout << "number1 shift right = " << bitset<8>(number1b) << endl;
    cout << "number1 (decimal) = " << dec << number1 << endl;

    return 0;
}