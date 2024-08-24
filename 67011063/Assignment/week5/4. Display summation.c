#include <stdio.h>

int main()
{
    int x, y, sum = 0;
    printf(" *** Display Summation ***\n");
    printf("Enter 2 whole number : ");
    scanf("%d%d", &x, &y);
    printf("Summation = ");
    if (x<=y)
    {
        while(x<=y)
        {
            sum += x;
            if(x==y)
                printf("%d = %d", x, sum);
            else
                printf("%d + ", x);
            x++;
        }
    }
    else if (y<=x)
    {
        while(y<=x)
        {
            sum += y;
            if(y==x)
                printf("%d = %d", y, sum);
            else
                printf("%d + ", y);
            y++;
        }
    }
    return 0;
}
