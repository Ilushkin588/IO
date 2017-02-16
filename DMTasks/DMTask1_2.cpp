// DMTask1_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

int main()
{
    auto size = 1;
    int * pArray = (int*)malloc(size * sizeof(int));

    if (pArray == nullptr) {
        std::cerr << "Error!";
        exit(1);
    }

    auto count = 0, element = 1;
    while (element > 0) {
        std::cout << "Enter the number: ";
        std::cin >> element;
        
        if (element > 0) {
            ++count;
            int * newpArray = (int*)realloc(pArray, count * sizeof(int));

            if (newpArray != nullptr) {
                pArray = newpArray;
                newpArray[count - 1] = element;
            }
            else {
                free(pArray);
                std::cerr << "Error!";
                exit(1);
            }
        }
    }

    for (int i = 0; i < count; ++i)
        std::cout << pArray[i] << " ";
    free(pArray);
    return 0;
}