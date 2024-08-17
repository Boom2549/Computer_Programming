#include <stdio.h>

int main()
{
    int num, amount, i;
    printf(" *** Show isosceles triangle ***\n");
    printf("Enter a counting number : ");
    scanf("%d", &num);
    if (num<3)
        printf(" --- Incorrect number. ---");
    else
    {
        printf("Output : \n");
        for(int line=1; line<=num; line++)
        {
            for(int space=1; space<=num-line; space++)
                printf(" ");
            for(int x=1; x<=2*line-1; x++) //The amount of * in each line
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
