// Copyright Thispring Studio

#include "../Engine/Core/Header/CoreSharedPCH.h"
#include <iostream>

int main()
{
    int32 value = 100;

    std::cout << "Before: " << value << std::endl;

    bomsagwa::String str;
    value = str.strlen("Hello World! Goodbye World?");

    std::cout << "After:" << value << std::endl;

    return 0;
}
