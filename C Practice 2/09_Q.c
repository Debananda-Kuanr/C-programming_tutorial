// Author:Debananda Kuanr
// purpose: Program to swap two numbers without using a third variable.
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a:\n");
    scanf("%d", &a);

    printf("Enter the value of b:\n");
    scanf("%d", &b);

    printf("Before Swaping the value of a is %d and the value of b is %d \n", a, b);

    /*
    📌 Example: Input → a = 5, b = 10
    Step 1: a = 5 + 10 = 15
    Step 2: b = 15 - 10 = 5
    Step 3: a = 15 - 5 = 10
    ✅ Output → a = 10, b = 5
    */

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swaping the value of a is %d and the value of b is %d \n", a, b);
    return 0;
}