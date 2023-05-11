#include "ProtectedDerivedClass.h"

int ProtectedDerivedClass::getProtectedValue()
{
   return protectedValue +30;
}

int ProtectedDerivedClass::getPublicValue()
{
	return publicValue +30;
}