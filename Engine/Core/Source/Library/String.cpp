// Copyright Thispring Studio

#include "../../Header/Library/String.h"

#include <stdlib.h>

namespace bomsagwa
{

String::String()
    : mBaseBuf(nullptr), mShortBuf(), mLongBuf(nullptr),
      mLength(0), mCapacity(sizeof(mShortBuf))
{
}

String::String(const ANSICHAR* str)
    : mBaseBuf(nullptr), mShortBuf(), mLongBuf(nullptr),
      mLength(0), mCapacity(sizeof(mShortBuf))
{
	if (str == nullptr)
	{
		// assert
	}

	// str 길이 계산 후, 조건 분기
	int32 length = 0;
	int32 idx = 0;

	while (str[idx] != '\0')
	{
		++idx;
		++length;
	}

	mLength = length;
	idx = 0;

	if (length < 256)
	{
		while (str[idx] != '\0')
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
		// Length 길이에 따라 256을 몇번 곱할지 정하기
		while (mLength > mCapacity)
		{
			mCapacity += DEFAULT_STRING_CAPACITY + 1;
		}

		mLongBuf = (ANSICHAR*)malloc(sizeof(ANSICHAR) * (mCapacity));

		while (str[idx] != '\0')
		{
			mShortBuf[idx] = str[idx];
			++idx;
		}

		mCapacity = sizeof(mShortBuf);
		mBaseBuf = mShortBuf;
	}
}

String::~String()
{
	if (mLongBuf != nullptr)
	{
		delete mLongBuf;
	}
}

void String::Reverse(ANSICHAR* str)
{
	if (str == nullptr)
		return;

	ANSICHAR temp[DEFAULT_STRING_CAPACITY] = {};
	int32    idx = 0;
	int32    length = 0;

	while (str[idx] != '\0')
	{
		temp[idx] = str[idx];
		++idx;
		++length;
	}

	idx = 0;

	while (length != '\0')
	{
		--length;
		str[idx] = temp[length];
		++idx;
	}
}

uint64 String::Length() const
{
	return mLength;
}

const ANSICHAR* String::c_str() const
{
	return mBaseBuf;
}

ANSICHAR* String::strcpy(ANSICHAR* dest, const ANSICHAR* src)
{
	/*
	NOTE(26-09-07):
	Q:
	"복사 기능만 필요하다면 왜 C 표준의 strcpy는 void가 아니라 굳이 char*를 반환하도록 설계했을까?"
	A:
	C에서 함수 호출을 표현식(expression)으로 연결하고, 작업 대상인 dest를 반환해서 후속 연산에 사용할 수 있게 하는 설계 관습으로 이해하기
	*/
	if (dest == nullptr || src == nullptr)
		return nullptr;

	int32 idx = 0;

	while (dest[idx] != '\0' && src[idx] != '\0')
	{
		dest[idx] = src[idx];
		++idx;
	}

	return dest;
}

ANSICHAR* String::strncpy(ANSICHAR* dest, const ANSICHAR* src, int32 count)
{

	return nullptr;
}

ANSICHAR* String::strcat(ANSICHAR* dest, const ANSICHAR* src)
{

	return nullptr;
}

int64 String::strlen(const ANSICHAR* str)
{
	if (str == nullptr)
		return 0;

	int32 count = 0;
	int32 idx = 0;

	while (str[idx] != '\0')
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
	// if (rhs == nullptr) return false;

	bool bEqual = false;

	// 문자열 길이가 같은지 부터 확인
	if (this->mLength != rhs.mLength)
		return bEqual;

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

} // namespace bomsagwa