// proj11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "DrawRhombes.h"

int main() {
    Rhombes Rhomb(5, Rhombes::Symbol::ceil);
    Rhomb.Draw();
    return 0;
}
