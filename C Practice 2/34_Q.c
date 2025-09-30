//What is a Pointer?

#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;   // pointer storing address of a
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Pointer p = %p\n", p);
    printf("Value at p = %d\n", *p);
    return 0;
}

/*

✅ Pointer Operators

& → Address-of operator
* → Value-at-address (dereference operator)

*/
