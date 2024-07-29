#include <iostream>

/*
    printArray is a helper function which takes an array and its size and prints
    it to the output stream
*/
void printArray(int arr[], int size) {
    for(int i = 0;i < size; i++){
        std::cout << arr[i];
    }
    std::cout << std::endl;
}
/*
reverseArray takes a pointer to an integer and an integer called size as its arguments.
- If 'arr' is an array, it will point to the memory address of the first element of the array.
- size is the number of elements in the array, calculated by dividing sizeof the array by sizeof one element.
- start is a pointer that initially points to arr[0].
- end is a pointer that initially points to arr[size - 1]; if size is 6, it points to arr[5], the last element in the array.

The function swaps elements from the start and end of the array:
1. Create a temp integer and assign it the value pointed to by start (i.e., the first element).
2. Assign the value pointed to by end (i.e., the last element) to the location pointed to by start.
3. Assign the value stored in temp (the original first element) to the location pointed to by end.

This effectively swaps the first and last elements of the array. The pointers are then moved:
- Increment start to point to the next element.
- Decrement end to point to the previous element.

The loop continues until start and end pointers cross each other and the array is reversed.
*/


void reverseArray(int *arr, int size){
    int *start = arr;
    int *end = arr + size - 1;
    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    
    int nums [] {1,2,3,4,5,6};
    int size = sizeof(nums)/sizeof(nums[0]);

    std::cout << "Initial array: \n";
    printArray(nums,size);
    std::cout << "Reversed array: \n";
    reverseArray(nums,size);
    printArray(nums,size);

    return 0;
}