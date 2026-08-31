// Copyright Thispring Studio

#include "../Engine/Core/Header/CoreSharedPCH.h"
#include <iostream>

using namespace bomsagwa;

int main()
{
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


    }

    {

        //Vector2 pos;
    }


    return 0;
}
