#include <iostream>


/*
    Function that takes a pointer and an integer as arguments
    Dereferences the pointer, and multiplies the value by the multiplier integer
*/

void multiplyPtr(int *ptr, int multiplier) {
    *ptr *= multiplier;
}


int main() {
    
    int *ptr {nullptr};
    int num { 12 };
    
    std::cout << &ptr << std::endl;
    ptr = &num;
    std::cout << *ptr << std::endl;
    
    multiplyPtr(ptr, 3);
    
    std::cout << *ptr;
    
    return 0;
}