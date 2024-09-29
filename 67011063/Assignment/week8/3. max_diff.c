#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[10];
    printf(" *** Maximum diference of adjacent number ***\n");
    printf("Enter 10 integers : ");
    for(int i = 0; i<10; i++) {
        scanf("%d", &x[i]);
    }
    
    int max = 0;
    
    for(int i = 0; i<9; i++) {
        int diff = abs(x[i] - x[i+1]); //0-1.....8-9 so 9 i should be 8
        if (diff > max)
            max = diff;
    }
    
    
    printf("Maximum differnce is %d", max);
    return 0;
}