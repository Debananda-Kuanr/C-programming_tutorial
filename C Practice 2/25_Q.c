// Author: Debananda Kuanr
// Purpose: Program to generate Fibonacci series up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("\n");

    return 0;
}


/*

Process:

Start: t1=0, t2=1

Loop:

i=1 → print 0 → next=0+1=1 → t1=1, t2=1

i=2 → print 1 → next=1+1=2 → t1=1, t2=2

i=3 → print 1 → next=1+2=3 → t1=2, t2=3

i=4 → print 2 → next=2+3=5 → t1=3, t2=5

i=5 → print 3 → next=3+5=8 → t1=5, t2=8

i=6 → print 5 → next=5+8=13 → t1=8, t2=13

i=7 → print 8 → next=8+13=21 → t1=13, t2=21

Output:

Fibonacci Series: 0 1 1 2 3 5 8

*/