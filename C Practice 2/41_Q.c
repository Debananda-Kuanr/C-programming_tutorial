/*
   Find the length of a string using pointers.
*/

#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') { // until null character
        length++;
        str++;
    }
    return length;
}

int main() {
    char a[] = "Hello Pointers!";
    printf("Length of string = %d\n", stringLength(a));
    return 0;
}


/*

*str = 'H' → not \0 → length = 1
*str = 'i' → not \0 → length = 2
*str = ' '(space) →not \0 → length= 3
*str = 'T' → not \0 → length = 4 continues until '\0'.

*/

