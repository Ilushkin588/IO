#pragma once
#ifndef DrawRhombes_h
#define DrawRhombes_h
#include <iostream>

class Rhombes {
//private:
    struct parametrs { 
        int Height;
        int symbol_number;
        
       parametrs() : Height(0), symbol_number(0){
           std::cout << "Constructor was called!!\n";
       }
    };
    
    parametrs ofRhombes;
   //int Height, symbol_number;
   
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

 void print(char symbol, int amount);
   
public:
    Rhombes() {
        int H = 0, symbol_num = 0;
        std::cin >> H;
        std::cout << "Enter the number of one of the elements(1: * , 2: # , 3: +): ";
        std::cin >> symbol_num;
        ofRhombes.Height = H;
        ofRhombes.symbol_number = symbol_num;
    }
   // Rhombes(int H, int symbol_num) {
   //     setRhombes(H, symbol_num);
   // }
 //   void setRhombes(int H, int symbol_num) {
   //     std::cout << "Heights of the Rhombes is " << H << "\n";
  //      std::cout << "And the symbol number is " << symbol_num << "\n";
 //       ofRhombes.Height = H;
 //       ofRhombes.symbol_number = symbol_num;
 //   }

    
   void draw() {
       auto symbol = GetSymb(ofRhombes.symbol_number);
       auto amountSpaces = ofRhombes.Height / 2 + 1;
       auto amountSymb = -1;
       for (int i = 1; i <= ofRhombes.Height / 2 + 1; ++i) {
           --amountSpaces;
           amountSymb += 2;
          print(' ', amountSpaces);
          print(symbol, amountSymb);
           std::cout << "\n";
       }
       for (int i = 0; i < ofRhombes.Height / 2; ++i) {
           ++amountSpaces;
           amountSymb -= 2;
           print(' ', amountSpaces);
           print(symbol, amountSymb);
           std::cout << "\n";
       }
      // ofRhombes.SimpleConstructor(ofRhombes.Height);
    }
  
};
   void Rhombes::print (char symbol, int amount) {
       for (int i = 0; i < amount; ++i) {
           std::cout << symbol;
       }
   }
#endif /* DrawRhombes_h */