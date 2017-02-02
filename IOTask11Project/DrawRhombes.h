#ifndef DrawRhombes_h
#define DrawRhombes_h
#include <iostream>

class Rhombes {
public:
    enum class Symbol { star = 1, ceil, plus };

    Rhombes(int h, Symbol stars);
    void Draw();
private:
    struct parametrs { 
        int height;  
        Symbol symbol_number;         
    };
    parametrs ofRhombes;

    char GetSymb(Symbol symbol_number);
    void Print(char symbol, int amount);  
};
#endif /* DrawRhombes_h */