#include<stdio.h>
int main()
{
    int i=9,x = 105;
    while (i<=x)
    {
        if(i<x)
        {
            printf("Loop: %d\n", i);
        }else if (i==x){
            printf("Loop: %d", i);
        }
        i+=6; //01
    }
    return 0;
}
