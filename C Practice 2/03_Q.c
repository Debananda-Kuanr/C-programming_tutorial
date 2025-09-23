#include <stdio.h>

int main()
{
    // Define a constant PI = 3.14 and calculate the area of a circle with radius 7.
    #define Pi 3.14
    float r = 7.0;
    // Area = pi*r*r;

    float area = Pi * r * r;
    printf("The Area of the circle is %f\n", area);

    return 0;
}