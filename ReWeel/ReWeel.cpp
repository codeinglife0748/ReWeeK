#include <iostream>
using namespace std;

bool isPrime(int p) {
	//判斷p是否為質數
	if (p <= 1) return false;
	for (int i = 2; i < p; i++) {
		if (p % i == 0) return false;
	}
	return true;
}

int main()
{
	//列出所有小於等於n的質數
	int n;
	int primes[100] = { 0 };
	//int a[3] = { 1,2,3 };
	//int b[2][3] =
	//{
	//	{1,2,3},
	//	{4,5,6}
	//};
	cout << "輸入一個數值n: ";
	cin >> n;

	int j = 0;
	for (int i = 1; i <= n; i++) {
		if (isPrime(i)) {
			primes[j] = i;
			j++;
		}
	}

	// foreach loop
	cout << "小於等於" << n << "的質數有:" << endl;
	for (int p : primes) {
		if (p != 0) cout << p << endl;
	}
}