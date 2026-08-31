// Copyright Thispring Studio

#include "../../Header/Library/String.h"

namespace bomsagwa
{
    String::String()
        : mBaseBuf(nullptr), mShortBuf(), mLongBuf(nullptr), 
        mLength(0), mCapacity(0)
    {
    }

    String::String(const ANSICHAR *str)
        : mBaseBuf(nullptr), mShortBuf(), mLongBuf(nullptr), 
        mLength(0), mCapacity(0)
    {
        if (str == nullptr)
        {
            // assert
        }

        // str 길이 계산 후, 조건 분기
        int32 length = 0;
        int32 idx = 0;

        // str[idx] != '\0'와 같다.
        while (str[idx] ^ 0)
        {
            ++idx;
            ++length;            
        }

        mLength = length;
        idx = 0;

        if (length < 256)
        {
            while (str[idx] ^ 0)
            {
                mShortBuf[idx] = str[idx];
                ++idx;
            }

            mCapacity = sizeof(mShortBuf);
            mBaseBuf = mShortBuf;
        }
        else
        {
            // mLongBuf 동적할당

        }
    }

    String::~String()
    {
        if (mLongBuf != nullptr)
        {
            delete mLongBuf;
        }
    }

    void String::Reverse(ANSICHAR *str)
    {
        if (str == nullptr) return;

        ANSICHAR temp[255] = {};
        int32 idx = 0;
        int32 length = 0;

        while (str[idx] ^ 0)
        {
            temp[idx] = str[idx];
            ++idx;
            ++length;
        }

        idx = 0;
        
        while (length ^ 0)
        {
            --length;
            str[idx] = temp[length];
            ++idx;
        }
    }

    int64 String::Length() const
    {
        return mLength;
    }

    void String::strcpy(ANSICHAR* dest, const ANSICHAR* src)
    {
        if (dest == nullptr)
            return;

    }

    int64 String::strlen(const ANSICHAR *str)
    {
        if (str == nullptr) return 0;

        int32 count = 0;
        int32 idx = 0;

        while (str[idx] ^ 0)
        {
            ++count;
            ++idx;
        }

        return count;
    }

    bool String::operator==(const String& rhs) const
    {   
        /*
        * NOTE(26-08-31):
        * 아래 구문에서 nullptr 비교 시, 생성자를 호출하는 이유를 찾아보기
        */
        //if (rhs == nullptr) return false;

        bool bEqual = false;

        // 문자열 길이가 같은지 부터 확인
        if (this->mLength != rhs.mLength) return bEqual;

        /*
        * TODO(26-08-31):
        * 255, ShortBuf 기준으로 작성, 추후 LongBuf 비교도 완성하기
        */

        int32 idx = 0;
        while (this->mShortBuf[idx] == rhs.mShortBuf[idx])
        {
            ++idx;
            if (idx == this->mLength)
                return bEqual = true;
        }

        return bEqual;
    }
}