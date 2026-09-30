// Copyright Thispring Studio

#include "../Engine/Core/Header/CoreSharedPCH.h"
#include <iostream>
#include <stdlib.h>

using namespace bomsagwa;

int main()
{
	{
		/*
		 * 정수 문자열 변환
		 */
	}

	{
		/*
		 * My String Class Test Local
		 */

		// String name1("Kim");
		// String name2("Kim");
		// String name3("John");

		// if (name1 == name2)
		// 	std::cout << "Equal Name!" << std::endl;
		// else
		// 	std::cout << "Not Equal Name!" << std::endl;

		// std::cout << name1.Length() << std::endl;
		// std::cout << name3.Length() << std::endl;

		// std::cout << String::strlen("Hello") << std::endl;

		// ANSICHAR        str1[10] = "Hello?";
		// const ANSICHAR* str2 = "World";
		// String::strcpy(str1, str2);

		// std::cout << str1 << std::endl;
		// const ANSICHAR* temp = name1.c_str();
		// std::cout << temp << std::endl;
	}

	{

		// Vector2 pos;
	}

	{
		// Array
		TArray<int32> intAry;
		intAry.Add(16);
		intAry.Add(32);
		intAry.Add(64);
		intAry.Add(128);
		intAry.Add(256);
		intAry.Add(512);
		int32 a = 0;
		// intAry[0];
	}

	{
		int32* ptr REC_NEW(int32, 1, ptr);
		ptr[0] = 10;
		std::cout << ptr[0] << std::endl;
		REC_DELETE(ptr);

		float* fptr REC_NEW(float, 2, ptr);
	}

	CheckMemoryLeak();
	return 0;
}
