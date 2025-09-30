/*
   Print the addresses of all elements of an array using pointers.
*/

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;  // pointer to first element

    for (int i = 0; i < 5; i++) {
        printf("Address of arr[%d] = %p\n", i, (p + i));
    }

    return 0;
}
