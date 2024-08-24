#include <stdio.h>

int main()
{
    float F, C;
    printf(" *** Convert Fahrenheit to Celcius ***\n");
    printf("Enter temperature in degree Fahrenheit : ");
    scanf("%f", &F);
    C = ((F-32)*5)/9;
    printf("%.2f degree Fahrenheit equals %.2f degree celcius.\n", F, C);
    return 0;
}
