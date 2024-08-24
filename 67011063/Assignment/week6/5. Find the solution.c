#include <stdio.h>

int main()
{
    int n, i=1;
    printf(" *** Find Solution a*a*b = n ***\n");
    printf("Enter n : ");
    scanf("%d", &n);
    for(int a=1; a<=n; a++)
    {
        for(int b=1; b<=n; b++)
        {
            if(a*a*b == n)
            {
                printf("%3d. (a,b) = (%d,%d)\n", i, a, b);
                i++;
            }
        }
    }
    printf("There are %d solution(s).", i-1);
    
    return 0;
}
