#include <stdio.h>

int main()
{
    char firstname[20], lastname[20];
    printf("Enter full name : ");
    scanf("%s %s", firstname, lastname);
    printf("[ %.2s%.1sky ]", firstname, lastname);
    return 0;
}
