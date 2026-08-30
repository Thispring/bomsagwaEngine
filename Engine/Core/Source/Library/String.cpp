// Copyright Thispring Studio

#include "../../Header/Library/String.h"

namespace bomsagwa
{
    String::String()
    {
    }

    String::~String()
    {

    }

    void String::strcpy(char* Dest, const char* Src)
    {
        if (Dest == nullptr)
            return;

    }

    int64 String::strlen(const char *Str)
    {
        if (Str == nullptr)
            return 0;

        int Count = 0;
        int Idx = 0;

        while (true)
        {
            if (Str[Idx] == '\0')
            {
                break;
            }

            ++Count;
            ++Idx;
        }

        return Count;
    }
    
}