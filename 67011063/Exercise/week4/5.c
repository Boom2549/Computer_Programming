#include <stdio.h>

int main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d", &number);
    if (number < 0)
        printf("%d is a negative number.", number);
    else
        printf("%d is a positive number.", number);
    return 0;
}
