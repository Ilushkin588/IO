#include <iostream>
#include "stdafx.h"
#include "DrawRhombes.h"

char Rhombes::GetSymb(int symbol_num) {
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
char Rhombes::GetSymb(int symbol_num) {
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

void Rhombes::Print(char symbol, int amount) {
    for (int i = 0; i < amount; ++i) {
        std::cout << symbol;
    }
}

void Rhombes::Draw(){

    auto symbol = GetSymb(ofRhombes.symbol_number);
    auto amountSpaces = ofRhombes.height / 2 + 1;
    auto amountSymb = -1;
    for (int i = 1; i <= ofRhombes.height / 2 + 1; ++i) {
        --amountSpaces;
        amountSymb += 2;
        Print(' ', amountSpaces);
        Print(symbol, amountSymb);
        std::cout << "\n";
    }
    for (int i = 0; i < ofRhombes.height / 2; ++i) {
        ++amountSpaces;
        amountSymb -= 2;
        Print(' ', amountSpaces);
        Print(symbol, amountSymb);
        std::cout << "\n";
    }
}

void Rhombes::InputParam() {
    std::cout << "Enter the height: ";
    std::cin >> ofRhombes.height;
    std::cout << "Enter the number of one of the elements(1: * , 2: # , 3: +): ";
    std::cin >> ofRhombes.symbol_number;
}

Rhombes::Rhombes(int H, int symbol_num) :
    ofRhombes{ H, symbol_num } {};