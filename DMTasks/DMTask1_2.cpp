#include <iostream>
#include <cstdlib>

int main()
{
    int element = 1, size = 1, count = 0;
    int *pArray =  (int *) malloc(size);
        while (element > 0) {
            std::cout << "Enter the number: ";
            std::cin >> element;
            if (element > 0) {
                if (size <= count){
                    pArray = (int *) realloc(pArray, ++size);
                }
                pArray[count] = element;
                ++count;
            }
        }
    
        for (int i = 0; i < count; ++i) {
            std::cout << pArray[i] << " ";
        }
    free(pArray);
    return 0;
}
