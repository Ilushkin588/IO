#include "stdafx.h"
#include <iostream>

int main()
{
    int element = 1, size = 1, count = 0;
    int *pArray = new int[size];

    while (element > 0) {
        std::cout << "Enter the number: ";
        std::cin >> element;
        if (element > 0) {
            if (size <= count) {
                int *temp = new int[++size];
                for (int i = 0; i < count; ++i) {
                    temp[i] = pArray[i];
                }
                delete[] pArray;
                pArray = temp;
            }
            pArray[count] = element;
            ++count;
        }
    }
    for (int i = 0; i < count; ++i) {
        std::cout << pArray[i] << " ";
    }
    delete[] pArray;
    return 0;
}