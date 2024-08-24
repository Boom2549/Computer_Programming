#include <stdio.h>

int main()
{
    int x = 0, y = 0, z = 0;
    if (x>y)
        printf("Block A ");
    else if (y>z)
        printf("Block B ");
    else if (x>=z)
        printf("Block C ");
    return 0;
}

