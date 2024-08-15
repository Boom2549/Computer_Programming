#include <stdio.h>

int main()
{
    char str[300];
    int x, i;
    printf(" *** To Upper Case ***\n");
    printf("Enter a string : ");
    scanf("%[^\n]", str);
    printf("Output : ");
    for (x = 0; str[x] != '\0'; x++)  //if char is not '\0' print the character until find it
    for (i = 0; i<x; i++)
    {
        if (str[i]>= 97 && str[i]<=122)
            printf("%c", str[i-32]);
        else
            printf("%c", str[i]);
    }
    return 0;
}
