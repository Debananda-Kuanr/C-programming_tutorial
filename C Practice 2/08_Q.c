// Author:Debananda Kuanr
//purpose: Use the ternary operator to find the largest of three numbers.
#include <stdio.h>

int main()
{   
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest = ( (a > b) ? a : b ) > c ? ( (a > b) ? a : b ) : c;
    printf("The largest value is %d \n",largest);
    
    return 0;
}