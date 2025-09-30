//purpose: Recursive program to calculate power of a number (a^b)

#include <stdio.h>

int power(int a, int b) {
    if (b == 0) return 1;         // base case
    return a * power(a, b - 1);   // recursive step
}

int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("%d^%d = %d\n", base, exp, power(base, exp));
    return 0;
}


/*
    Call stack expansion for power(2, 4):

    power(2, 4)
        → returns 2 * power(2, 3)

    power(2, 3)
        → returns 2 * power(2, 2)

    power(2, 2)
        → returns 2 * power(2, 1)

    power(2, 1)
        → returns 2 * power(2, 0)

    power(2, 0)
        → base case → returns 1

    Backtracking results:
    power(2, 1) = 2 * 1 = 2
    power(2, 2) = 2 * 2 = 4
    power(2, 3) = 2 * 4 = 8
    power(2, 4) = 2 * 8 = 16
    */