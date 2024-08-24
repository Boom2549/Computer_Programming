#include <stdio.h>

int main()
{
    int number, c;
    printf("Enter \'number\' and \'count\' : ");
    scanf("%d%d", &number, &c);

    if (c<=1) {
        printf("I can move on\n");
        return 0;
    }else{
        printf("%d", number); //1st number
        int count = 1;
        int sum = number;
        c--;
        while (count <= c)
        {
            sum += number;
            printf(" + ");
            printf("%d", number);
            count++;

        }
        printf(" = %d", sum);
    }
    return 0;
}
