//
//  main.cpp
//  IOTask11
//
//  Created by IlyaDenisov on 29.01.17.
//  Copyright © 2017 Denisov's. All rights reserved.
//

#include <iostream>
#include "GetSymbol.h"
#include "PrintSymbol.h"
#include"DrawRhombes.h"


int main() {
    int H = 0, W = 0, symbol_num = 0;
    std::cin >> H >> W;
    std::cout << "Enter the number of one of the elements(1: * , 2: # , 3: +): ";
    std::cin >> symbol_num;
    GetSymbol symbol;
    auto SymbolOfRhombes = symbol.getSymbol(symbol_num);
    DrawRhombes Rhombes;
    Rhombes.drawRhombes(H, SymbolOfRhombes);
    return 0;
}
