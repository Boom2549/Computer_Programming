#include <stdio.h>

int main()
{
    int x;
    x = 1;
    while (x<=10)
    {
        printf("Loop Test\n");
        x++;
    }
    printf("\nAfter loop end, x=%d", x);
    return 0;
}

