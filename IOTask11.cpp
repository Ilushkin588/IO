// IOTask11.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

void print(char symbol, int amount) {
    for (int i = 0; i < amount; i++) {
        std::cout << symbol;
    }
}
int main() {
    int H = 0, W = 0;
    std::cin >> H >> W;
    char space = ' ';
    char symbol = '*';
    auto amountSpaces = H / 2;
    auto amountSymb = 1;
    for (int i = 1; i <= H/2 + 1; i++) {
            print(space, amountSpaces);
            print(symbol, amountSymb);
            amountSpaces--;
            amountSymb += 2;
            std::cout << "\n";
    }
    amountSymb = H - 2;
    amountSpaces = 1;
    for (int i = 1; i <= H/2; i++) {
            print(space, amountSpaces);
            print(symbol, amountSymb);
            amountSpaces++;
            amountSymb -= 2;
            std::cout << "\n";
    }
    return 0;
}