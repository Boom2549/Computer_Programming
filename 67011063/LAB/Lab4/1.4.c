#include <stdio.h>

int main()
{
    float a = 19/10, b = 0.2, c = 1.7;

    printf("a=%.10f\n", a);
    printf("b=%.10f\n", b);
    printf("c=%.10f\n", c);
    printf("a-b=%.10f\n", a-b);
    printf("(a-b)==c >>>>> Logic: %d", (a-b)==c);

    return 0;
}


