#include<stdio.h>
int main()
{
    int i,x;
    printf("Input number: ");
    scanf("%d", &x);
    for(i=10;i<x;i++) //01
        printf("Loop: %d\n", i);
    return 0;
}
