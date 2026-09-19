// Copyright Thispring Studio

#pragma once
#include "../CoreTypes.h"

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

private:
	T*    mData;
	int32 mCapacity;
	int32 mSize;
};

template <typename T>
inline TArray<T>::TArray()
    : mData(nullptr), mCapacity(0), mSize(0)
{
}

template <typename T>
inline TArray<T>::~TArray()
{
}

template <typename T>
inline void TArray<T>::Add(const T& data)
{
}

template <typename T>
inline void TArray<T>::Remove()
{
}

} // namespace bomsagwa