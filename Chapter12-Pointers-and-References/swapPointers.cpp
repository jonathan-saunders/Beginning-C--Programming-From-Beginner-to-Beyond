#include <iostream>

void swapPointers(int *ptr1, int *ptr2) {
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    }

int main() {
    
    int a { 5 };
    int b { 10 };

    std::cout << "Before swap: \n";
    std::cout << "A is: " << a << std::endl;
    std::cout << "B is: " << b << std::endl;

    swapPointers(&a,&b);

    std::cout << "After swap: \n";
    std::cout << "A is: " << a << std::endl;
    std::cout << "B is: " << b << std::endl;

    return 0;
}