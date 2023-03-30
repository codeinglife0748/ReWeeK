#include <iostream>
using namespace std;

int main()
{
	int var = 20;
	//int* ip; // 不建議使用
	//int* ip = 0; // C++98之前的空指標定義，現在不建議使用
	//int* ip = NULL; // C++98之前的空指標定義，現在不建議使用
	int* ip = nullptr; // C++之後的空指標定義
	double* ip1 = nullptr;

	ip = &var;
	int** ipp = &ip;

	cout << "var = " << var << endl;
	cout << "&var = " << &var << endl;
	cout << "ip (i.e. &var) = " << ip << endl;
	cout << "ipp (i.e. &ip) = " << ipp << endl;
	cout << "*ip = " << *ip << endl;
	cout << "*ipp = " << *ipp << endl;
	cout << "**ipp = " << **ipp << endl;
	cout << endl;

	const int N = 5;
	int a[N] = { 0, 10, 20, 30, 40 };
	int* ptr = nullptr;
	ptr = a;

	cout << "a = " << a << endl;
	cout << "ptr = " << ptr << endl;
	cout << "a[3] = " << a[3] << endl;
	cout << "*ptr+3 = " << *ptr + 3 << endl;
	cout << "*(ptr+3) = " << *(ptr + 3) << endl;
	cout << "ptr = " << ptr << endl;
	cout << "*ptr++ = " << *ptr++ << endl;
	cout << "ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;
	cout << endl;

	ptr = a;
	cout << "ptr = " << ptr << endl;
	for (int i = 0; i < N; i++) {
		cout << "a[" << i << "] = " << a[i] << endl;
		cout << "第" << i << "個指標 = " << ptr << endl;
		cout << "第" << i << "個指標的內容 = " << *ptr << endl;
		ptr++;
	}
	cout << endl;

	string str = "Hello World!";
	char* ptr_str = &str[0];
	cout << "*(ptr_str+6) = " << *(ptr_str + 6) << endl;
}