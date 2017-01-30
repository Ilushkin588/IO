// proj11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "DrawRhombes.h"


int main() {
    int H = 0, W = 0, symbol_num = 0;
    std::cin >> H;
    std::cout << "Enter the number of one of the elements(1: * , 2: # , 3: +): ";
    std::cin >> symbol_num;
    Rhombes Rhomb(H, symbol_num);
    Rhomb.draw();
    return 0;
}
