#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Insert the number of each side : ");
    scanf("%d%d%d", &a, &b, &c);
    int max;
    if (a>=b && a>=c) {
        max = a;
        if (b+c <= max)
            printf("failed");
        else {
            int max2 = max*max;
            if (max2 == b*b + c*c)
                printf("yes");
            else
                printf("triangle but not");
        }
    }
        
    if (b>=a && b>=c) {
        max = b;
        if (a+c <= max)
            printf("failed");
        else {
            int max2 = max*max;
            if (max2 == a*a + c*c)
                printf("yes");
            else
                printf("triangle but not");
        }
    }
    if (c>=b && c>=a) {
        max = c;
        if (a+b <= max)
            printf("failed");
        else {
            int max2 = max*max;
            if (max2 == b*b + a*a)
                printf("yes");
            else
                printf("triangle but not");
        }
    }
        
        
    
    return 0;
}
