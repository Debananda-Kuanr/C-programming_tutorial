//Here starts the loop concepts...

// Author:Debananda Kuanr
//purpose: Enter your purpose here
//Date:25-09-2025

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}


/*
++i → Pre-increment (increase first, then use)
i++ → Post-increment (use first, then increase)

break; → Exit from loop immediately.
continue; → Skip current iteration, continue with next one.

Ex:
 for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) 
        continue;
        printf("%d ", i);
    }
  
*/