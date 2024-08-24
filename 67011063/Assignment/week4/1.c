#include <stdio.h>

int main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d", &number);
    if (number < 8)
        printf("%d < 8", number);
    else
        printf("%d >= 8", number);
    return 0;
}
