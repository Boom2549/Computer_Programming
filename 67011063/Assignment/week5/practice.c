#include <stdio.h>

int main()
{
    //count_in = amount to +
    int num_in, count_in, total = 0;

    printf("Enter \'number\' and \'count\' : ");
    scanf("%d%d", &num_in, &count_in);

    if (count_in<=1)
    {
        printf("I can't move on\n");
        return 0;
    }

    for (int count; count<=count_in; count++)
    {
        total += num_in;
        printf("%d", num_in);
        if (count <= count_in)
            printf(" + ");
        else
            printf(" = %d\n", total);

    }
    return 0;
}
