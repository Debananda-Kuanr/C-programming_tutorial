//Purpose: Swap 2 number using 3rd variable (Use The Pointer)

/*
#include <stdio.h>
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
int main() {
    int a = 5, b = 10;
    swap(a, b);
    printf("a = %d, b = %d\n", a, b); // values not swapped
    return 0;
}

*/

#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 5, b = 10;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}


