//purpose: Recursive function to check whether a number is prime

#include <stdio.h>
#include <stdbool.h>

bool isPrimeHelper(int n, int i) {
    if (i * i > n) return true;        // no divisor found
    if (n % i == 0) return false;      // divisor found
    return isPrimeHelper(n, i + 1);    // check next divisor
}

bool isPrime(int n) {
    if (n <= 1) return false;
    return isPrimeHelper(n, 2);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is prime.\n", num);
    else
        printf("%d is not prime.\n", num);

    return 0;
}
