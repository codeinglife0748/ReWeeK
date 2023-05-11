#pragma once
#include "inherit.h"
class PublicDerivedClass :
    public inherit
{

public:
    int getProtectedValue();
};

