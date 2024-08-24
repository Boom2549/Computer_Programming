#include <stdio.h>

int main()
{
    int a, b, c, ans, hundreds, odd_or_even;
    printf("Enter 3 Number : ");
    scanf("%d%d%d", &a, &b, &c);
    ans = a + b + c;
    hundreds = ans / 100;
    odd_or_even = hundreds % 2;
    printf("ANSWER = %d\n", ans);
    if (odd_or_even == 0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;
}
