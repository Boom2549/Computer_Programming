#include <stdio.h>

int main()
{
    int x;
    printf("Input number: ");
    scanf("%d", &x);
    int i = 1;
    do
    {
        printf("%d ", i);
        i++;
    }while (i<=x);
    return 0;
}
