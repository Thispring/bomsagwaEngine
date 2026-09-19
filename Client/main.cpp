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

		char* local = (char*)malloc(sizeof(char) * 10);

		int strNum = 48;

		for (int i = 0; i < 10; ++i)
		{
			if (i == 9)
			{
				local[i] = 0;
				break;
			}

			local[i] = strNum;
			++strNum;
		}

		std::cout << local << std::endl;
	}

	{
		/*
		 * My String Class Test Local
		 */

		String name1("Kim");
		String name2("Kim");
		String name3("John");

		if (name1 == name2)
			std::cout << "Equal Name!" << std::endl;
		else
			std::cout << "Not Equal Name!" << std::endl;

		std::cout << name1.Length() << std::endl;
		std::cout << name3.Length() << std::endl;

		std::cout << String::strlen("Hello") << std::endl;

		ANSICHAR        str1[10] = "Hello?";
		const ANSICHAR* str2 = "World";
		String::strcpy(str1, str2);

		std::cout << str1 << std::endl;
		const ANSICHAR* temp = name1.c_str();
		std::cout << temp << std::endl;
	}

	{

		// Vector2 pos;
	}

	{
		// Array
		TArray<int32> intAry;
		intAry.Add(32);
	}

	return 0;
}
