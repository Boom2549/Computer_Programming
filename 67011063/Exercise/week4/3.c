#include <stdio.h>

int main()
{
    int number, mod;
    printf(" *** switch control structure ***\n");
    printf("Enter a number : ");
    scanf("%d", &number);
    mod = number % 3;
    switch (mod)
    {
        case 0 :
            printf("Hello, world!");
            break;
        case 1 :
            printf("Hello, what a wonderful world!");
            break;
        case 2 :
            printf("Hello, it is a beautiful day.");
            break;
    }
    return 0;
}
