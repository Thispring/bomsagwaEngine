// Copyright Thispring Studio

#pragma once

#include "../../Header/CoreTypes.h"

namespace bomsagwa
{
    class String
    {
    public:
        String();
        String(const ANSICHAR* str);
        ~String();

        void Reverse(ANSICHAR* str);
        int64 Length() const;

        void strcpy(ANSICHAR* dest, const ANSICHAR* src);
        int64 strlen(const ANSICHAR* str);
        // TODO:
        // strncpy
        // strcat
        // strncat
        // strcmp
        // strncmp

        // TODO:
        // =, + 
        bool operator==(const String& rhs) const;

    private:
        ANSICHAR*   mBaseBuf;           // 길이에 따라 아래 멤버의 주소를 들고 있기

        ANSICHAR    mShortBuf[255];     // 기본, 짧은 문자열 용
        ANSICHAR*   mLongBuf;           // mShortBuf 보다 더 큰 문자열이 필요할 때, 동적할당 후 주소반환

        int32       mLength;
        int32       mCapacity;
    };
}