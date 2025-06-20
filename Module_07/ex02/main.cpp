#include "Array.hpp"
#include <iostream>

template <typename T>
void printArray(const Array<T>& array) {
    for (std::size_t i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    try {
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;
        Array<int> intArray(3);
        
        std::cout << "Integer array size: " << intArray.size() << std::endl;
        intArray[0] = 1;
        intArray[1] = 2;
        intArray[2] = 3;
        printArray(intArray);
        
        Array<int> copiedArray(intArray);
        copiedArray[0] = 100;
        printArray(copiedArray);
        
        
        Array<int> assignedArray;
        assignedArray = intArray;
        std::cout << "Assigned array elements:" << std::endl;
        printArray(assignedArray);
        std::cout << intArray[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}