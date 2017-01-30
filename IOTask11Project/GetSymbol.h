//
//  GetSymbol.h
//  IOTask11
//
//  Created by IlyaDenisov on 29.01.17.
//  Copyright © 2017 Denisov's. All rights reserved.
//

#ifndef GetSymbol_h
#define GetSymbol_h
#include "PrintSymbol.h"
#include<iostream>

class GetSymbol{
private:
    int symbol_num;
public:
    char getSymbol(int symbol_num) {
        char symbol = '*';
        switch (symbol_num) {
            case 2: {
                symbol = '#';
                break;
            }
            case 3: {
                symbol = '+';
                break;
            }
            default: {
                symbol = '*';
                break;
            }
        }
        return symbol;
    }    
};


#endif /* GetSymbol_h */
