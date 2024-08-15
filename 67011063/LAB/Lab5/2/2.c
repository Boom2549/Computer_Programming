#include <stdio.h>

int main()
{
    int x;
    printf("Input number: ");
    scanf("%d", &x);
    int i = 1;
    do
    {
        printf("%d*%d=%d\n", x, i, x*i);
        i++;
    }while (i<=12);
    return 0;
}
