#pragma once
#include <iostream>
class LikeVector {
private:
        int count;
        int size;
        int *pArray;
public:
    int sizeOfVector();
    int capacity();
    LikeVector();
    void push_back(int element);
    bool empty();
    void clear();
    int atIndex(int);
    int& operator [](int n); 
    friend std::ostream& operator <<(std::ostream& os, const LikeVector& vect);
    ~LikeVector();
};