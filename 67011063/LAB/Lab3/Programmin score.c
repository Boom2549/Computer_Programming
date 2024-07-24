#include <stdio.h>

int main()
{
    float lab, mid, finale, total;
    printf("Lab score: ");
    scanf("%f", &lab);
    printf("Midterm score: ");
    scanf("%f", &mid);
    printf("Final score: ");
    scanf("%f", &finale);
    total = lab + mid + finale;
    printf("\nTotal score: %.3f", total);
    return 0;
}
