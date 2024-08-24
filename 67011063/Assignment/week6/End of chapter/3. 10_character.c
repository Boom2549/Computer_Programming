#include <stdio.h>

int main()
{
    char text[100];
    printf("Enter a sentence : ");
    scanf("%[^\n]", text);
    int c = 0;
    while(text[c] != '\0')
        c++;
    int count = c;
    
    
    
    
    printf("\nResult :\n");
    for(int i=0; i<count; i+=1)
    {   
        while(i<=100)
        {
            if(i<10)
                printf("%s", text[i]);
            i+=10;
        }
    }
    
    
    

    return 0;
}
