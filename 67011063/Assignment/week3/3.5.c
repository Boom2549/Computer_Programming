#include <stdio.h>

int main()
{
    int lotto;
    printf("Enter lottery number : ");
    scanf("%d", &lotto);
    printf("%-8s: %d\n", "Jackpot", lotto);
    printf("%-8s: %d\n", "+1", lotto+1);
    printf("%-8s: %d\n", "-1", lotto-1);
    printf("%-8s: %d\n", "First 3", lotto/1000);
    printf("%-8s: %d\n", "Last 3", lotto%1000);
    return 0;
}
