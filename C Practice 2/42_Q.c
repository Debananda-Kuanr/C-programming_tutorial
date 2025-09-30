//Write a program to print a 2D array using pointer notation.

#include <stdio.h>

int main() {
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

    // arr is pointer to first row, *(arr+i) is pointer to row i
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
    return 0;
}


/*

i = 0, j = 0 → *(*(arr+0)+0) → 1
i = 0, j = 1 → *(*(arr+0)+1) → 2
i = 0, j = 2 → *(*(arr+0)+2) → 3
i = 1, j = 0 → *(*(arr+1)+0) → 4
i = 1, j = 1 → *(*(arr+1)+1) → 5
i = 1, j = 2 → *(*(arr+1)+2) → 6

*/