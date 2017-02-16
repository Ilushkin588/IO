#include "stdafx.h"
#include <iostream>
#include "LikeVector.h"

/*void LikeVector::befull(int* pArray, int size) {
    int element = 1, count = 0;
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
    }*/
    //for (int i = 0; i < count; ++i) {
  //      std::cout << pArray[i] << " ";
 //   }
   // delete[] pArray;
//}

LikeVector::LikeVector(){
    count = 0;
    size = 1;
    pArray = new int[size];
}
void LikeVector::push_back(int element) {
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
int LikeVector::sizeOfVector() {
    return size;
}
int LikeVector::capacity() {
    return count;
}
LikeVector::~LikeVector() {
    delete[] pArray;
}


