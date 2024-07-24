#include <stdio.h>

int main()
{
    float m_g, h_cm, m, h, Ep, g = 9.8;
    printf("Input mass (g): ");
    scanf("%f", &m_g);
    m = m_g / 1000;
    printf("Input height (cm): ");
    scanf("%f", &h_cm);
    h = h_cm / 100;
    Ep = m * g * h;
    printf("\nPotenial Energy = %.2f", Ep);
    return 0;
}
