// Author:Debananda Kuanr
// purpose:Program to check if a given year is a leap year.

#include <stdio.h>

int main()
{
    int year;
    printf("Enter any year:\n");
    scanf("%d", &year);

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year \n", year);
    }

    return 0;
}


/*
Explanation:

year % 400 == 0 → divisible by 400 → leap year
OR
year % 4 == 0 → divisible by 4
AND year % 100 != 0 → not divisible by 100


Examples:
2000 → divisible by 400 → ✅ leap year
1900 → divisible by 100 (but not 400) → ❌ not leap year
2012 → divisible by 4 (not by 100) → ✅ leap year
2019 → not divisible by 4 → ❌ not leap year
*/