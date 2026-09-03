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

		String str;

		ANSICHAR ch[10] = "Hello";
		std::cout << ch << std::endl;

		str.Reverse(ch);
		std::cout << ch << std::endl;

		String str2 = "Hello";
		String str3 = "Yellow";
	}

	{

		// Vector2 pos;
	}

	return 0;
}
