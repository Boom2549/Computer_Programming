#include <stdio.h>
int main()
{
    int x=1;
    while (x<10) //00
    {
        printf("x=%d\n",x);
        x+=4; //01
    }
    printf("After Loop end, x=%d",x); //02
    return 0;
}
