#include <stdio.h>

int main()
{
    char name[20];
    int upper, len;

    printf("Enter your name : ");
    scanf("%[^\n]", name);
    int i = 0;
    while (name[i] != '\0')
    {
        if (name[i]>='a' && name[i]<='z')
            printf("%c\n", name[i]-32);
        i++; //first count
    }

    printf("Name length : %d", i);
    return 0;
}
