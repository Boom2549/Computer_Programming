// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int row;
    printf(" *** Show isosceles triangle ***\n");
    printf("Enter a counting number : ");
    scanf("%d", &row);
    for(int i = 1; i<=row; i++) {
        for(int j = 1; j<=2*row-1; j++) {
            if (j>=row-i+1 && j<= row+i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(int i = row-1; i>=1; i--) {
        for(int j = 1; j<=2*row-1; j++) {
            if (j>=row-i+1 && j<= row+i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}