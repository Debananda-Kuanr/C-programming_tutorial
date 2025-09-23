// Author:Debananda Kuanr
//purpose:Write a program to check whether a number is positive, negative, or zero.
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a Int Type Number:\n");
    scanf("%d",&a);

    if (a>0){
        printf("%d is a Possitive value \n",a);
    }
    else if(a<0){
        printf("%d is a Negative Value \n",a );
    }
    else{
        printf("You enter Zero\n");
    }
    return 0;
}