#include <stdio.h>

int main()
{
    int x, sum = 0;
    while(x!=0){
        printf("Input number: ");
        scanf("%d", &x);
        if (x==0){
            sum+=x;
            break;
        }else{
            sum+=x;
        }
    }
    printf("Total=%d", sum);
    return 0;
}

