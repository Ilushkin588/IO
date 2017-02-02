#include <iostream>
#include "stdafx.h"
#include "DrawRhombes.h"

char Rhombes::GetSymb(Symbol symbol_number){
    switch (symbol_number) {
    case Symbol::ceil: 
    {
        return '#';
    }
    case Symbol::plus:
    {
        return '+';
    }
    default: {
        return '*';
   }
    }
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

Rhombes::Rhombes(int H, Symbol stars) :
    ofRhombes{H, stars} {};