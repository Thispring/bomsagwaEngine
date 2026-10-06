// Copyright Thispring Studio

#include "../../Header/Memory/MemoryTracker.h"

#include <iostream>

namespace bomsagwa
{

void*  MemoryTracker::sPtrTable[DEFAULT_SIZE] = {};
uint32 MemoryTracker::sAllocIndex = 0;

MemoryTracker::MemoryTracker()
{
}

MemoryTracker::~MemoryTracker()
{
	for (int32 i = 0; i < sAllocIndex; ++i)
	{
		if (sPtrTable[i] != nullptr)
		{
			// 누수 발생
			/*
			 * NOTE(26-10-06):
			 * sPtrTable에 sizeof는 void* 배열 사이즈 크기를 반환
			 * 정확하게 확인하려면 void* 배열이 가리키는 녀석의 사이즈를 반환해야함
			 */
			std::cout << "메모리 누수 발생, " << "사이즈: " << sizeof(sPtrTable[i]) << std::endl;
		}
	}
}

} // namespace bomsagwa
