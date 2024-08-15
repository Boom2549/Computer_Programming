#include<stdio.h>
int main()
{
    int i, x, sum=0;
    printf("Input number: ");
    scanf("%d", &x);
    for(i=1; i<=x; i++)
    {
        if (i==x)
        {
            sum+=i;
            break;
        }
        else
            sum+=i;
    }
    float avg = 1.0*sum/x;
    printf("The average from 1 to %d = %.2f", x, avg);
    return 0;
}
