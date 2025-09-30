//what is Pointer to Pointer(Know using Programme)


#include <stdio.h>
int main() {
    int a = 5;
    int *p = &a;
    int **q = &p;  // pointer to pointer

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("**q = %d\n", **q);
    return 0;
}
