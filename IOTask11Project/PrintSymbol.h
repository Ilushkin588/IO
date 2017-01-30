//
//  PrintSymbol.h
//  IOTask11
//
//  Created by IlyaDenisov on 29.01.17.
//  Copyright © 2017 Denisov's. All rights reserved.
//

#ifndef PrintSymbol_h
#define PrintSymbol_h
#include <iostream>
class PrintSymbol{
private:
    char symbol;
    int amount;
public:
    void print(char symbol, int amount) {
        for (int i = 0; i < amount; ++i) {
            std::cout << symbol;
        }
    }
};

#endif /* PrintSymbol_h */
