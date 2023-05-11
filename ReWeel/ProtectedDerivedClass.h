#pragma once
#include "inherit.h"
class ProtectedDerivedClass :
    protected inherit
{
public:
    int getProtectedValue();
    int getPublicValue();
};
