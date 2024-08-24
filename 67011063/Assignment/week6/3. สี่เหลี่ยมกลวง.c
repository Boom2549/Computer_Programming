#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number (1-16) : ");
    scanf("%d", &num);
    if (num<1 || num>16)
    {
        printf("Out of range ! ! !");
        return 0;
    }
    else
    {
        int x = num;
        char dis = 'A' + (num-10);
        for(int i=1; i<=num; i++)                           //row x
        {
            for(int j=1; j<=num; j++)                       //column y
            {
                if(i==1 || i==num || j==1 || j==num)        //dedicated space for printing
                {
                    if(x>9)
                        printf("%c", dis);
                    else
                        printf("%d", x);
                    }
                else
                    printf(" ");
                dis--;
                x--;
            }
            dis = 'A' + (num-10);
            x = num;
            printf("\n");
        }
    }
    return 0;
}