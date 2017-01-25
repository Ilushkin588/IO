// IOTask11.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>


void rhombus(char symbol, int width, int height) {
    if (width == 1 && height == 1) {
        std::cout << " " << symbol << "\n" << symbol << " " << symbol << "\n" << " " << symbol << "\n";
    }
    else {
        for (int i = 0; i <= width / 2; i++)
            std::cout << " ";
        std::cout << symbol;

        for (int i = 0; i < height / 2; i++)
            std::cout << "\n";
        std::cout << symbol;

        for (int i = 0; i <= width; i++)
            std::cout << " ";
        std::cout << symbol;

        for (int i = 0; i < height / 2; i++)
            std::cout << "\n";

        for (int i = 0; i <= width / 2; i++)
            std::cout << " ";
        std::cout << symbol;
    }
}
int main()
{
    int symbol_num = 0, width = 0, height = 0;
    char symbol;
    std::cout << "Enter the height: ";
    std::cin >> height;
    std::cout << "Enter th width: ";
    std::cin >> width;
    std::cout << "Enter the number of one of the elements(1: * , 2: # , 3: +): ";
    std::cin >> symbol_num;
    switch (symbol_num) {
    case 1: {
        symbol = '*';
        break;
    }
    case 2: {
        symbol = '#';
        break;
    }
    case 3: {
        symbol = '+';
        break;
    }
    default: {
        std::cout << "Wrong number!";
        return 0;
    }
    }
    rhombus(symbol, width, height);
    return 0;
}


