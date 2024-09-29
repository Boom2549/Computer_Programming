// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    int length = 0;
    while (str[length] != '\0')
        length++;
    printf("OUTPUT : ");
    for(int x = length-1; x>=0; x--)
        printf("%c", str[x]);
    return 0;
}