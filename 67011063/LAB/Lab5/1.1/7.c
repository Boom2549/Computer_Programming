#include<stdio.h>
int main()
{
    int x=10,y; //01
    printf("Input number: ");
    scanf("%d", &y);
    do
    {
        printf("Loop: %d\n", x);
        x++;
    } while(x<y);
    return 0;
}
