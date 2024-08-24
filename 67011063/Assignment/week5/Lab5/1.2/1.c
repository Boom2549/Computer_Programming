#include<stdio.h>
int main()
{
    int i=1, x, sum=0;
    printf("Input number: ");
    scanf("%d", &x);
    do{
        sum+=i;
        printf("Loop:%d, sum=%d\n",i,sum); //01
        i++;
    }while (i<=x);
    printf("Summation from 1 to %d = %d", x, sum);
    return 0;
}
