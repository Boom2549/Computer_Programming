#include <stdio.h>

int main()
{
    int x, count;
    printf("Enter number : ");
    scanf("%d", &x);
    if (x<=0)
        printf("</3\n");
    else if (x>10)
        printf("Too much :(\n");
    else
        for(int count = 1; count<=x; count++)
            printf("I Love You\n");
    return 0;
}

