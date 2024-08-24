#include <stdio.h>

int main() {
    int i, j, k, x;
    printf("Input number: ");
    scanf("%d", &x);
    for (i=0; i<x; i++) {
        for (j=0; j<i; j++)
            printf("-");
        for (k=i; k<x; k++)
            printf("+");
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}