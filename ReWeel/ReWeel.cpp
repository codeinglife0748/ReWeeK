
#include <iostream>
#include<iomanip>
#include<bitset>
#include<string.h>
#include<string>
#include"inherit.h"
#include"PublicDerivedClass.h"
#include"ProtectedDerivedClass.h"
#include"PrivateDerivedClass.h"
using namespace std;

int main()
{
    inherit parentObject;
    PublicDerivedClass childObject1;
    ProtectedDerivedClass childObject2;
    PrivateDerivedClass childObject3;



    cout << "父類別的私有成員值 = " << parentObject.getPriveateValue() << endl;
    cout << "父類別的受保護成員值 = " << parentObject.getProtectedValue() << endl;
    cout << "父類別的公開成員值 = " << parentObject.publicValue << endl;
    cout << endl;

    cout << "公開繼承:父類別的私有成員值 = " << childObject1.getPriveateValue() << endl;
    cout << "公開繼承:父類別的受保護成員值 = " << childObject1.getProtectedValue() << endl;
    cout << "公開繼承:父類別的公開成員值 = " << childObject1.publicValue << endl;
    cout << endl;

    cout << "受保護繼承：子類別的私有成員值 = " << "私有成員值不存在" << endl;
    cout << "受保護繼承：子類別的受保護成員值 = " << childObject2.getProtectedValue() << endl;
    cout << "受保護繼承：子類別的公開成員值 = " << childObject2.getPublicValue() << endl;
    cout << endl;

    cout << "私有繼承：子類別的私有成員值 = " << "私有成員值不存在" << endl;
    cout << "私有繼承：子類別的受保護成員值 = " << childObject3.getProtectedValue() << endl;
    cout << "私有繼承：子類別的公開成員值 = " << childObject3.getPublicValue() << endl;
    cout << endl;
    return 0;
}

