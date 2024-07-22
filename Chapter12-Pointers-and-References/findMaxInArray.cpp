#include <iostream>

int find_max_element(int* arr, int size) {
    int largest = arr[0]; // Initialize to the first element in the array
   
    for(size_t i = 1; i < size; ++i) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int myArray[] = {1,2,3,10,44,4,5,6,7};
    int size {};
    
    for(auto n: myArray){
        size += 1;
    }
    
    std::cout << find_max_element(myArray, size);
}