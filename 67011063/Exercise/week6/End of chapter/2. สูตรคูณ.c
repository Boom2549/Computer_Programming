
#include <stdio.h>

int main()
{
    int num = 0;
    while (1)
    {
        if (num>=2 && num<=25)
        {
            for(int i=1; i<=12; i++)
                printf("%d * %d = %d\n", num, i, num*i);
            break;
        }
        else
        {
            printf("Enter a number : ");
            scanf("%d", &num);
        }
    }
    return 0;
}

