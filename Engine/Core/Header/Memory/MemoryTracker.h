// Copyright Thispring Studio

#pragma once
#include "../CoreTypes.h"

namespace memorytracker
{
const int32 DEFAULT_SIZE = 255;
}

using namespace memorytracker;

static void* sPtrTable[DEFAULT_SIZE] = {};

static uint32 sAllocIndex = 0;
static uint32 sDeAllocIndex = 0;

template <typename T>
static void RecordAllocation(const T& typeInfo);

template <typename T>
inline void RecordAllocation(const T& typeInfo)
{
	sPtrTable[sAllocIndex] = typeInfo;
	++sAllocIndex;
}

template <typename T>
static void RecordDeAllocation(const T& typeInfo);

template <typename T>
inline void RecordDeAllocation(const T& typeInfo)
{
	for (int32 i = 0; i < sAllocIndex; ++i)
	{
		if (sPtrTable[i] == typeInfo)
		{
			sPtrTable[i] = nullptr;
		}
	}
}

void CheckMemoryLeak();

#include <iostream>

inline void CheckMemoryLeak()
{
	for (int32 i = 0; i < sAllocIndex; ++i)
	{
		if (sPtrTable[i] != nullptr)
		{
			// 누수 발생
			std::cout << "메모리 누수 발생, " << "사이즈: " << sizeof(sPtrTable[i]) << std::endl;
		}
	}
}

#define REC_NEW(TYPE, SIZE, PTR) \
	= new TYPE[SIZE];            \
	RecordAllocation(PTR);

#define REC_DELETE(PTR)      \
	RecordDeAllocation(PTR); \
	delete[] PTR;
