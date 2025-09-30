/*
   ❓ Question:
   Write a C program using recursion to print numbers from 1 to 100.

   👉 Explanation:
   - We define a recursive function printNumbers(n) that:
       • Base case: stops when n > 100
       • Recursive case: prints n and then calls printNumbers(n+1)
   - This way, numbers are printed in increasing order (1 → 100).
*/

#include <stdio.h>

void printNumbers(int n) {
    if (n > 100) return;       // Base case: stop when n > 100
    printf("%d ", n);          // Print current number
    printNumbers(n + 1);       // Recursive call with next number
}

int main() {
    printNumbers(1);           // Start from 1
    return 0;
}
