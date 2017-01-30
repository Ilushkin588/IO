//
//  DrawRhombes.h
//  IOTask11
//
//  Created by IlyaDenisov on 30.01.17.
//  Copyright © 2017 Denisov's. All rights reserved.
//

#ifndef DrawRhombes_h
#define DrawRhombes_h
#include <iostream>
#include "PrintSymbol.h"

class DrawRhombes{
private:
    int H;
    char symbol;
public:
    void drawRhombes(int H, char symbol) {
        auto amountSpaces = H / 2 + 1;
        auto amountSymb = -1;
        PrintSymbol ss;
        for (int i = 1; i <= H / 2 + 1; ++i) {
            --amountSpaces;
            amountSymb += 2;
            ss.print(' ', amountSpaces);
            ss.print(symbol, amountSymb);
            std::cout << "\n";
        }
        for (int i = 0; i < H / 2; ++i) {
            ++amountSpaces;
            amountSymb -= 2;
            ss.print(' ', amountSpaces);
            ss.print(symbol, amountSymb);
            std::cout << "\n";
        }
    }

};

#endif /* DrawRhombes_h */
