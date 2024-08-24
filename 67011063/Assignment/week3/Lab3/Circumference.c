#include <stdio.h>

int main()
{
    float pi = 3.14159, radius, circumference;
    printf("Input radius: ");
    scanf("%f", &radius);
    circumference = 2 * pi * radius;
    printf("\nCircumference = %.3f", circumference);
    return 0;
}
