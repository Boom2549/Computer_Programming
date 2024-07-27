#include <stdio.h>

int main()
{
    int x, y, z;
    float max, min;
    printf(" ***Find Maximum / Minimum ***\n");
    printf("Enter 3 intrgers : ");
    scanf("%d%d%d", &x, &y, &z);

    //max
    if (x>=y && x>= z)
        max = x;
    else if (y>=x && y>= z)
        max = y;
    else if (z>=x && z>= y)
        max = z;

    //min
    if (x<=y && x<= z)
        min = x;
    else if (y<=x && y<= z)
        min = y;
    else if (z<=x && z<= y)
        min = z;

    printf("Max / Min = %.0f / %.0f = %.3f", max, min, max / min);
    return 0;
}
