#include<stdio.h>
int main()
{
    int a, b, c;
    int middle;
    printf("Input 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    //a mid
    if ( ((a>b)&&(a<c)) || ((a>c)&&(a<b)) )
    {
        middle = a;
        printf("%d is in the middle\n", middle);
    }
    //b mid
    else if ( ((b>a)&&(b<c)) || ((b>c)&&(b<a)) )
    {
        middle = b;
        printf("%d is in the middle\n", middle);
    }
    //c mid
    else if ( ((c>a)&&(c<b)) || ((c>b)&&(c<a)) )
    {
        middle = c;
        printf("%d is in the middle\n", middle);
    }
    //no mid
    else
        printf("No middle value\n");


    return 0;
}
