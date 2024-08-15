#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Input a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    if ((a>b) && (a>c))
        printf("a is maximum: %d", a);
    else if ((b>a) && (b>c))
        printf("b is maximum: %d", b);
    else if ((c>a) && (c>b))
        printf("c is maximum: %d", c);
    return 0;
}


