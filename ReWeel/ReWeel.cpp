#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    //計算從1加到n的總和
    cout << "請輸入一個數值n: ";
    cin >> n;

    // for loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "使用for loop: " << "1至" << n << "的總和為= " << sum << endl;

    // while loop
    int i = 1;
    sum = 0;
    while (i <= n) {
        sum += i;
        i++;
    }
    cout << "使用while loop: " << "1至" << n << "的總和為= " << sum << endl;

    // do-while loop
    i = 1;
    sum = 0;
    do {
        sum += i;
        i++;
    } while (i <= n);
    cout << "使用do-while loop: " << "1至" << n << "的總和為= " << sum << endl;
}