#include <stdio.h>
int main()
{
    int x,num,j,i;
    printf("input (1-20)  : ");
    scanf("%d",&x);
    printf("\n");
    if(x<1 || x>20){
        printf("No Answer");
        return 0;
    }
    else
    num = 9;
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            printf("  %d", num);
            num--;
            if (num == 0) {
                num = 9;
            }
        }
        printf("\n");
    }
    return 0;
}