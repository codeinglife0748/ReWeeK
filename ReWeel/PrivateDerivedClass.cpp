#include "PrivateDerivedClass.h"

int PrivateDerivedClass::getProtectedValue()
{
	return protectedValue + 10;
}

int PrivateDerivedClass::getPublicValue()
{
	return publicValue + 10;
}

