// Copyright Thispring Studio

#pragma once
#include "../CoreTypes.h"

namespace memorytracker
{
const int32 DEFAULT_SIZE = 255;
}
using namespace memorytracker;

namespace bomsagwa
{
class MemoryTracker
{
public:
	MemoryTracker();
	~MemoryTracker();

	template <typename T>
	static void RecordAllocation(const T& typeInfo);
	template <typename T>
	static void RecordDeAllocation(const T& typeInfo);

private:
	static void*  sPtrTable[DEFAULT_SIZE];
	static uint32 sAllocIndex;
};

template <typename T>
inline void MemoryTracker::RecordAllocation(const T& typeInfo)
{
	sPtrTable[sAllocIndex] = typeInfo;
	++sAllocIndex;
}

template <typename T>
inline void MemoryTracker::RecordDeAllocation(const T& typeInfo)
{
	for (int32 i = 0; i < sAllocIndex; ++i)
	{
		if (sPtrTable[i] == typeInfo)
		{
			sPtrTable[i] = nullptr;
		}
	}
}

} // namespace bomsagwa

/*
 * TODO(26-10-01):
 * PTR은 사용자가 실수할 여지가 많으므로, 직접적으로 포인터를 받지 않고도
 * 동적할당을 추적하는 방안 생각해보기
 */

#define DECL_NEW(TYPE, ALLOC_SIZE, PTR_NAME) \
	TYPE* PTR_NAME = new TYPE[ALLOC_SIZE];   \
	MemoryTracker::RecordAllocation(PTR_NAME);

#define ASSIGN_NEW(TYPE, ALLOC_SIZE, PTR_NAME) \
	PTR_NAME = new TYPE[ALLOC_SIZE];           \
	MemoryTracker::RecordAllocation(PTR_NAME);

#define DELETE(PTR_NAME)                         \
	MemoryTracker::RecordDeAllocation(PTR_NAME); \
	delete[] PTR_NAME;