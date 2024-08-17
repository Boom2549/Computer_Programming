#include <stdio.h>

void printSquare(int n) {
    if (n < 3) {
        printf("Please enter a number greater than or equal to 3.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            for (int j = 0; j < n; j++) {
                printf("*");
            }
        } else {
            printf("*");
            for (int j = 1; j < n - 1; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Please enter number: ");
    scanf("%d", &n);
    printSquare(n);
    return 0;
}
