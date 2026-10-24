// Copyright Thispring Studio

#pragma once

#include "../CoreTypes.h"

template <typename T>
class Singleton
{
public:
	static T* GetInst();

private:
	static T* sInst;
	Singleton() {};
};

template <typename T>
inline T* Singleton<T>::GetInst()
{
	if (sInst == nullptr)
		sInst = new T;

	return sInst;
}

template <typename T>
T* Singleton<T>::sInst = nullptr;
