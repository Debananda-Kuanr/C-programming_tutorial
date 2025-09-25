// Author: Debananda Kuanr
// Purpose: Program to print all Armstrong numbers between 1 and 500.

#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for(num = 1; num <= 500; num++) {
        temp = num;
        sum = 0;

        while(temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit;  // cube of digit
            temp /= 10;
        }

        if(sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}

/*
📌 What is an Armstrong Number?

An Armstrong number (also called Narcissistic number) of 3 digits is a number such that:

👉 The sum of the cubes of its digits = the number itself.

Example:

153 → 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 ✅ Armstrong
370 → 3³ + 7³ + 0³ = 27 + 343 + 0 = 370 ✅ Armstrong
371 → 3³ + 7³ + 1³ = 27 + 343 + 1 = 371 ✅ Armstrong
407 → 4³ + 0³ + 7³ = 64 + 0 + 343 = 407 ✅ Armstrong
*/
