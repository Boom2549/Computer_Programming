#include <stdio.h>

int main()
{
    printf("1234567890123456789012345678901234567890\n");
    printf("Shopping List\n");
    printf("=============\n");
    float a = 2.25, b = 0.50, c = 0.25, d = 1.25, e = 4.75, f = 3.00;
    printf("1. %-20s:%7.2f$\n", "Coffee", a);
    printf("2. %-20s:%7.2f$\n", "Sugar", b);
    printf("3. %-20s:%7.2f$\n", "Salt", c);
    printf("4. %-20s:%7.2f$\n", "Chili paste", d);
    printf("5. %-20s:%7.2f$\n", "Butter", e);
    printf("6. %-20s:%7.2f$\n", "Whip cream", f);
    float total = a + b + c + d + e + f;
    printf("Total : %.2f\n", total);
    return 0;
}
