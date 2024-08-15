#include<stdio.h>
int main()
{
    int x;
    x = 47;                        //01
    while (x < 83)                 //02
    {
        printf("Hello there\n");
        x+=6;                        //03
    }
    printf("final_x = %d",x);
    return 0;
}
