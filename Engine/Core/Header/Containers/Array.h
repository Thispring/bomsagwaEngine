// Copyright Thispring Studio

#pragma once
#include "../CoreTypes.h"
#include <iostream>

const int32 DEFAULT_ALLOC_SIZE = 4;

/*
 * templete 활용
 */
namespace bomsagwa
{
template <typename T>
class TArray
{
public:
	TArray();
	~TArray();
	void Add(const T& data);
	void Remove();

	T operator[](int32 pos) const;

private:
	T*    mData;
	int32 mCapacity;
	int32 mSize;
	int32 mIndex;
};

template <typename T>
inline TArray<T>::TArray()
    : mData(nullptr), mCapacity(0), mSize(0), mIndex(0)
{
}

template <typename T>
inline TArray<T>::~TArray()
{
}

template <typename T>
inline void TArray<T>::Add(const T& data)
{
	if (mCapacity <= 0)
	{
		mData = new T;
		*(mData + mIndex) = data;
		mCapacity += sizeof(T) * DEFAULT_ALLOC_SIZE;
		mSize += sizeof(T);
		++mIndex;
	}
	else if (mCapacity == mSize)
	{
		// Capacity를 더 늘린다.
		mCapacity += sizeof(T) * DEFAULT_ALLOC_SIZE;
		T* temp = mData;
		mData = nullptr;
		mData = new T[mCapacity];
		mData = temp;
		*(mData + mIndex) = data;
		++mIndex;
		mSize += sizeof(T);
		// delete temp;
	}
	else
	{
		*(mData + mIndex) = data;
		++mIndex;
		mSize += sizeof(T);
	}

	for (int i = 0; i < mIndex; ++i)
		std::cout << "[Index: " << i << "]" << *(mData + i) << std::endl;
}

template <typename T>
inline void TArray<T>::Remove()
{
}

template <typename T>
inline T TArray<T>::operator[](int32 pos) const
{
	return T();
}

} // namespace bomsagwa