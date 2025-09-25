// Author: Debananda Kuanr
// Purpose: Program to print a pyramid star pattern.

#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // print spaces
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // print stars
        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/*

Enter number of rows: 3
  *
 ***
*****

*/