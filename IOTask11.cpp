// IOTask11.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
void print(char symbol, int amount) {
    for (int i = 0; i < amount; ++i) {
        std::cout << symbol;
    }
}
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
void rhombes(int H, char symbol) {
    auto amountSpaces = H / 2 + 1;
    auto amountSymb = -1;
    for (int i = 1; i <= H / 2 + 1; ++i) {
        --amountSpaces;
        amountSymb += 2;
        print(' ', amountSpaces);
        print(symbol, amountSymb);
        std::cout << "\n";
    }
    for (int i = 0; i < H / 2; ++i) {
        ++amountSpaces;
        amountSymb -= 2;
        print(' ', amountSpaces);
        print(symbol, amountSymb);
        std::cout << "\n";
    }
}

int main() {
    int H = 0, W = 0, symbol_num = 0;
    std::cin >> H >> W;
    std::cout << "Enter the number of one of the elements(1: * , 2: # , 3: +): ";
    std::cin >> symbol_num;
    auto symbol = getSymbol(symbol_num);
    rhombes(H, symbol);
    return 0;
}