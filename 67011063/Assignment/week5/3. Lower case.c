#include <stdio.h>

int main()
{
    char text[100];
    printf(" *** To Lower Case ***\n");
    printf("Enter a string : ");
    scanf("%[^\n]", text);

    int i = 0;
    while(text[i] != '\0')
    {
        if (text[i]>='A' && text[i]<='Z')
            text[i] = text[i]+32;
        else
            text[i] = text[i];
        i++;
    }

    printf("Output : %s", text);
    return 0;
}
