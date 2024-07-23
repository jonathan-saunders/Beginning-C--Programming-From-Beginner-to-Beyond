#include <iostream>

/*
    Declares a function that takes a pointer to an integer, and an integer called size
    The 'largest' integer is set to the first item in the array at index 0
    The for loop, starting at index [1], iterates through the array
    The if statement checks whether the item at index [i] is greater than largest
    If it is, then the item at item [i] becomes the new largest.
    Once the for loop has completed, largest is returned to the function caller.

*/

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