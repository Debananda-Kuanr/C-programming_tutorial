// Author: Debananda Kuanr
// Purpose: Program to check whether a number is prime.

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1) {
        isPrime = 0;
    } else {
        for(i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

    return 0;
}

/*

Example 1: num = 7

num <= 1? ❌ (7 > 1, so skip this).

Loop runs i = 2 to i <= 7/2 → 3.

i = 2 → 7 % 2 = 1 (not divisible).

i = 3 → 7 % 3 = 1 (not divisible).

No divisor found → isPrime remains 1.
✅ Output: 7 is a Prime number.

Example 2: num = 9

num <= 1? ❌ (9 > 1).

Loop runs i = 2 to i <= 9/2 → 4.

i = 2 → 9 % 2 = 1 (not divisible).

i = 3 → 9 % 3 = 0 ✅ divisible → isPrime = 0, loop breaks.

Found a divisor (3), so it’s not prime.
❌ Output: 9 is NOT a Prime number.

Example 3: num = 1

num <= 1? ✅ true → isPrime = 0.

Loop is skipped completely.
❌ Output: 1 is NOT a Prime number.

*/