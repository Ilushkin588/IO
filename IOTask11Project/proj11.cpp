// proj11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "DrawRhombes.h"


int main() {
    Rhombes Rhomb(7, 1);
    Rhomb.Draw();
    Rhombes R2;
    R2.InputParam();
    R2.Draw();
    return 0;
}
