//Purpose: Function that takes radius as input and returns the area of a circle

#include <stdio.h>
#define PI 3.14159

float areaOfCircle(float r) {
    return PI * r * r;
}

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area of circle = %.2f\n", areaOfCircle(radius));
    return 0;
}
