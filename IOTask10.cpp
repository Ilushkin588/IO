// IOTask10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>


int main()
{
    double A = 0.0, B = 0.0, C = 0.0;
    std::cin >> A >> B >> C;
    std::cout << std::setprecision(3) << std::fixed;
    if (A + B > C)
        std::cout << (A / C) + B;
    else if (A + B < C)
        std::cout << (A / B) + C;
    else
        std::cout << (A + B) / C;
    return 0;
}

