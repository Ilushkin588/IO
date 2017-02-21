#include "stdafx.h"
#include <iostream>
#include "LikeVector.h"
#include <vector>


int main()
{
    LikeVector somevector;
    somevector.push_back(10);
    somevector.push_back(50);
    somevector.push_back(50);
   
        std::cout << somevector.sizeOfVector() << "\n";
        std::cout << somevector.capacity() << "\n";
        std::cout << somevector;
    
    somevector.clear();
   if (somevector.empty()) {
       somevector.push_back(567);
        somevector.push_back(5897);
        std::cout << somevector;
        std::cout << somevector.sizeOfVector();
    }
    somevector.push_back(789);
    std::cout << somevector;
    std::cout << somevector.capacity();
    
   somevector.atIndex(5);
    return 0;
}

