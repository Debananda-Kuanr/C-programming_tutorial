// Author:Debananda Kuanr
//purpose: Write a program that asks a user to enter marks and prints the grade (A, B, C, Fail) using else-if.
#include <stdio.h>

int main()
{
    int mark;
    printf("Enter Your Mark:\n");
    scanf("%d",&mark);

    if(mark>=80 && mark<=100){
        printf("Grade:A\n");
    }
    else if (mark<80 && mark>=60)
    {
        printf("Grade:B\n");
    }
    else if (mark<60 && mark>=35)
    {
       printf("Grade:C\n");
    }
    else if (mark<35 && mark>=0)
    {
        printf("Grade:Fail\n");
    }
    else{
        printf("Error!! Insert a valid mark\n");
    }    
    return 0;
}