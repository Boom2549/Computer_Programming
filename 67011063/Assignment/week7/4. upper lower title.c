#include <stdio.h>
#include <ctype.h>
int main(){
    char mas[100];
    printf("Enter a string : ");
    scanf("%[^\n]",mas);
    
    printf("Capital : ");
    for(int i = 0; mas[i] != '\0'; i++) {
        printf("%c",toupper(mas[i]));
    }
    
    printf("\nSmall : ");
    for(int i = 0; mas[i] != '\0'; i++) {
        printf("%c",tolower(mas[i]));
    }

    printf("\nTitle : ");
    for(int i = 0; mas[i] != '\0'; i++) {
        if (i ==0 || mas[i-1] == ' ')
            printf("%c",toupper(mas[i]));
        else
            printf("%c",tolower(mas[i]));
    }
}
