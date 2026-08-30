// Copyright Thispring Studio

#pragma once

#include "../../Header/GenericPlatform/GenericPlatform.h"

namespace bomsagwa
{
    class String
    {
    public:
        String();
        ~String();

        void strcpy(char* Dest, const char* Src);
        int64 strlen(const char* Str);
    };
}