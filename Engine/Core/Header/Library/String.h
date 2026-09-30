// Copyright Thispring Studio

#pragma once

#include "../../Header/CoreTypes.h"

const int32 DEFAULT_STRING_CAPACITY = 255;

namespace bomsagwa
{
class String
{
public:
	String();
	String(const ANSICHAR* str);
	~String();

	void            Reverse(ANSICHAR* str);
	uint64          Length() const;
	const ANSICHAR* c_str() const;

	/*
	 * C Style static Func
	 */
	static ANSICHAR* strcpy(ANSICHAR* dest, const ANSICHAR* src);
	static ANSICHAR* strncpy(ANSICHAR* dest, const ANSICHAR* src, int32 count);
	static ANSICHAR* strcat(ANSICHAR* dest, const ANSICHAR* src);
	static int64     strlen(const ANSICHAR* str);

	// TODO:
	// strncat
	// strcmp
	// strncmp

	/*
	 * operator
	 */
	// TODO:
	// =, +
	bool operator==(const String& rhs) const;

private:
	// clang-format off
    ANSICHAR*       mBaseBuf; 							// 길이에 따라 아래 멤버의 주소를 들고 있기

	ANSICHAR        mShortBuf[DEFAULT_STRING_CAPACITY]; // 기본, 짧은 문자열 용
	ANSICHAR*       mLongBuf;      						// mShortBuf 보다 더 큰 문자열이 필요할 때, 동적할당 후 주소반환

	uint32          mLength;
	uint32          mCapacity;
	// clang-format on
};

} // namespace bomsagwa