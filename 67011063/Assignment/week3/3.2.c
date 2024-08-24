#include <stdio.h>

int main() {
    const int x;
    printf(" *** Show a number in variety formats. ***\n");
    printf("Enter a whole number : ");
    scanf("%d", &x);
    printf("You have input : %d\n", x);
    printf("You have input : %.2f\n", x * 1.00);
    printf("Square : %d\n", x * x);
    printf("%6d / 79 = %.4f\n", x, x / 79.0);
    printf("%6d / 29 = %.6f\n", x, x /29.0);
    printf("%6d / 37 = %.9f\n", x, x / 37.0);
}
