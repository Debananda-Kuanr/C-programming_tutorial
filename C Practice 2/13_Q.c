// Author: Debananda Kuanr
// Purpose: Write a simple calculator program using switch-case (add, subtract, multiply, divide).
#include <stdio.h>

int main()
{
    int a, b;
    char choice;

    printf("Enter the value of a:\n");
    scanf("%d", &a);

    printf("Enter the value of b:\n");
    scanf("%d", &b);

    printf("Enter an Operation (+, -, *, /):\n");
    scanf(" %c", &choice);

    switch(choice) {
        case '+':
            printf("Sum = %d\n", a + b);
            break;

        case '-':
            printf("Difference = %d\n", a - b);
            break;

        case '*':
            printf("Product = %d\n", a * b);
            break;

        case '/':
            if(b != 0) {
                printf("Quotient = %f\n", (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;

        default:
            printf("Invalid choice... Try Again\n"); 
    }

    return 0;
}
