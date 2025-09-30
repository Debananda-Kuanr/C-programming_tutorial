/*
   Reverse an array using pointers.
*/

#include <stdio.h>

void reverseArray(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    reverseArray(arr, 5);

    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

/*

🔍 Step-by-Step Explanation

Initial setup
arr = {1, 2, 3, 4, 5}
start points to arr[0] (value 1)
end points to arr[4] (value 5)

While loop condition
while (start < end) ensures we keep swapping until the two pointers meet in the middle.

Swapping process
Swap *start and *end (values at those addresses).

Iterations:
First swap → swap 1 and 5 → {5, 2, 3, 4, 1}
start → arr[1] (2)
end → arr[3] (4)
Second swap → swap 2 and 4 → {5, 4, 3, 2, 1}
start → arr[2] (3)
end → arr[2] (3)
Stop condition

When start == end (middle element, 3), no swap needed, loop ends.

*/