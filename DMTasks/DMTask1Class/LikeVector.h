#pragma once

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
    ~LikeVector();

};