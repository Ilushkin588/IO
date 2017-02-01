
#ifndef DrawRhombes_h
#define DrawRhombes_h
#include <iostream>

class Rhombes {

    struct parametrs {
        int height;
        int symbol_number;
        enum Symbol {star = 1, ceil, plus};
        Symbol symbol_enum;
    };
    parametrs ofRhombes;

    char GetSymb(int symbol_num);
    char GetSymb(enum symbol_enum);
    void Print(char symbol, int amount);

public:
    Rhombes(int h, int symbol_num);
    Rhombes() = default;

    void InputParam();
    void Draw();
};
#endif /* DrawRhombes_h */