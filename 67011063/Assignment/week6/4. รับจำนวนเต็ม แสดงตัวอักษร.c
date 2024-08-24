#include <stdio.h>

int main() 
{
    int num;
    printf("Enter : ");
    scanf("%d", &num);
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            printf("%c", (i+j)%num + 'A');
        }
        printf("\n");
    }
    return 0;
}
