#include <stdio.h>

int main()
{
    char alphabet;
    printf("Enter Alphabet : ");
    scanf("%c", &alphabet);
    if (alphabet == 'a')
        printf("YES");
    else
        printf("NO");
    return 0;
}
