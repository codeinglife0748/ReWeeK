#pragma once
#include "inherit.h"
class PrivateDerivedClass :
    private inherit
{
public:
    int getProtectedValue();
    int getPublicValue();
};

