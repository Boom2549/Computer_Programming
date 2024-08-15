#include <stdio.h>

int main()
{
    int x;
    printf("Input number: ");
    scanf("%d", &x);

    if (x>30)
        printf("%d is greater than 30", x);
    else if (x>20)
        printf("%d is greater than 20", x);
    else if (x>10)
        printf("%d is greater than 10", x);

    return 0;
}

