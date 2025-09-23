// Author:Debananda Kuanr
//purpose:Write a program to check if a number is even or odd using the modulus operator.
#include <stdio.h>

int main()
{   
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);

    if(a%2==0){
        printf("%d is an even Number \n",a);
    }
    else{
        printf("%d is an odd number \n",a);
    }
    return 0;
}