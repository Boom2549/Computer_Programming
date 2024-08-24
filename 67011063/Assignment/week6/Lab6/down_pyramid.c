#include <stdio.h>

int main() {
    int x;
    printf("Input number: ");
    scanf("%d", &x);
    printf("\n");
    for (int i=x; i>=1; i--) {
        for (int j=x; j>i; j--)
            printf(" ");
        for (int k=1; k<= (2 * i-1); k++)
            printf("o");
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}