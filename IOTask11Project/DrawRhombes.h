#pragma once
#ifndef DrawRhombes_h
#define DrawRhombes_h
#include <iostream>

class Rhombes {
//private:
   int H, symbol_num;
   int * pH = &H;
   int * pS_N = &symbol_num;
   
   char GetSymb(int symbol_num) {
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

   void print(char symbol, int amount) {
       for (int i = 0; i < amount; ++i) {
           std::cout << symbol;
       }
   }
   
public:
    
    Rhombes(int H, int symbol_num) {
        setRhombes(H, symbol_num);
    }
    void setRhombes(int H, int symbol_num) {
        
        *pH = H;
        *pS_N = symbol_num;
    }

    
   void draw() {
       auto symbol = GetSymb(*pS_N);

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




    /*
   
    void drawRhombes(int H, int symbol_num) {

       auto symbol = getSymbol(symbol_num);

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
    }*/
};

#endif /* DrawRhombes_h */