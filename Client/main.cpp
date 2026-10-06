// Copyright Thispring Studio

#include "../Engine/Core/Header/CoreSharedPCH.h"
#include <iostream>
#include <stdlib.h>

using namespace bomsagwa;

int main()
{
	MemoryTracker memTracker;

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

		// intAry.Print();
		for (int32 i = 0; i < 6; ++i)
			std::cout << intAry[i] << std::endl;
	}

	{
		// DECL_NEW(int32, 1, ptr);
		// ptr[0] = 10;
		// std::cout << ptr[0] << std::endl;
		// DELETE(ptr);

		// int32* ptr2;
		// ASSIGN_NEW(int32, 4, ptr2);
		// ptr2[0] = 20;
		// ptr2[1] = 30;
		// ptr2[2] = 40;

		// DECL_NEW(ANSICHAR, 10, cptr);
		// for (int32 i = 0; i < sizeof(cptr); ++i)
		// 	cptr[i] = 65 + i;

		// for (int32 i = 0; i < sizeof(cptr); ++i)
		// 	std::cout << cptr[i] << std::endl;

		// DELETE(cptr);

		// DECL_NEW(ANSICHAR, 30, cptr2);

		// DECL_NEW(float, 2, fptr);
	}

	return 0;
}
