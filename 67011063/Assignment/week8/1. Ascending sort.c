#include <stdio.h>

int main()
{
    int x[10];
    int temp, j, k;
    printf(" *** Ascending sort ***\n");
    printf("Enter 10 whole numbers : ");
    for(int i = 0; i<10; i++) {
        scanf("%d", &x[i]);
    }
    for(int round = 0; round<10; round++) {
        for(j = 0; j<10; j++) {
            if (x[j]>x[j+1]){
            temp = x[j];
            x[j] = x[j+1];
            x[j+1] = temp;
            }
        }
    }
    printf("\nOutput : ");
    for(k = 0; k<10; k++) {
        printf("%d ", x[k]);
    }
    return 0;
}
