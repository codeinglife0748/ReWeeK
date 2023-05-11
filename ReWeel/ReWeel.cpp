
#include <iostream>
#include<iomanip>
#include"inherit.h"
#include<bitset>
#include<string.h>
#include<string>
using namespace std;

int main()
{
    inherit parentObject;
    cout << "父類別的私有成員值 = " << parentObject.getPriveateValue() << endl;
    cout << "父類別的受保護成員值 = " << parentObject.getProtectedValue() << endl;
    cout << "父類別的公開成員值 = " << parentObject.publicValue << endl;
}

