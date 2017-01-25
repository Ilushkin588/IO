// IOTask11.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

int main()
{
    int symbol_num = 0, width = 0, height = 0;
    std::cout << "Enter the number of one of the elements(1: * , 2: # , 3: +): ";
    std::cin >> symbol_num >> width >> height;
    switch (symbol_num) {
    case 1: {
        if (width == 1 && height == 1) {
            std::cout << " *\n" << "* * \n" << " *\n";
        }
        else {
            for (int i = 0; i <= width / 2; i++)
                std::cout << " ";
            std::cout << "*";

            for (int i = 0; i < height / 2; i++)
                std::cout << "\n";
            std::cout << "*";

            for (int i = 0; i <= width; i++)
                std::cout << " ";
            std::cout << "*";

            for (int i = 0; i < height / 2; i++)
                std::cout << "\n";

            for (int i = 0; i <= width / 2; i++)
                std::cout << " ";
            std::cout << "*";
        }
        break;
    }
    case 2: {
        if (width == 1 && height == 1) {
            std::cout << " #\n" << "# # \n" << " #\n";
        }
        else {
            for (int i = 0; i <= width / 2; i++)
                std::cout << " ";
            std::cout << "#";

            for (int i = 0; i < height / 2; i++)
                std::cout << "\n";
            std::cout << "#";

            for (int i = 0; i <= width; i++)
                std::cout << " ";
            std::cout << "#";

            for (int i = 0; i < height / 2; i++)
                std::cout << "\n";

            for (int i = 0; i <= width / 2; i++)
                std::cout << " ";
            std::cout << "#";
        }
        break;
    }
    case 3: {
        if (width == 1 && height == 1) {
            std::cout << " +\n" << "+ + \n" << " +\n";
        }
        else {
            for (int i = 0; i <= width / 2; i++)
                std::cout << " ";
            std::cout << "+";

            for (int i = 0; i < height / 2; i++)
                std::cout << "\n";
            std::cout << "+";

            for (int i = 0; i <= width; i++)
                std::cout << " ";
            std::cout << "+";

            for (int i = 0; i < height / 2; i++)
                std::cout << "\n";

            for (int i = 0; i <= width / 2; i++)
                std::cout << " ";
            std::cout << "+";
        }
        break;
    }
    }
    return 0;
}


