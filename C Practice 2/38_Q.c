/*
   ❓ Question:
   Write a program in C that demonstrates how to use pointers 
   to access elements of an array.

   👉 Explanation:
   - In C, the array name (arr) points to the first element (&arr[0]).
   - A pointer can be used to traverse the array using pointer arithmetic:
       *p     → arr[0]
       *(p+1) → arr[1]
       *(p+2) → arr[2]
   - Pointer arithmetic moves in steps of the size of the data type.
     (For int, usually 4 bytes).
*/

#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};  // Array of 3 integers
    int *p = arr;               // Pointer points to the first element

    printf("%d\n", *p);     // Prints arr[0] → 10
    printf("%d\n", *(p+1)); // Prints arr[1] → 20
    printf("%d\n", *(p+2)); // Prints arr[2] → 30

    return 0;
}
