#include <stdio.h>

int main()
{
    int n,i;
    printf(" *** Display Summation ***\n");
    printf("Enter 2 whole numbers : ");
    scanf("%d %d",&n,&i);
    printf("Summation =");
    if(n>i){
    int s = n -i + 1;
    int sum = (float)s / 2 * (i+n);
    for(i;i<n;i++){
    printf(" %d +",i);}
    printf(" %d = %d",n,sum);}
    else if
    (n<=i){
    int z =i - n + 1;
    int su = (float)z / 2 * (i+n);
    for(n;n<i;n++){
    printf(" %d +",n);}
    printf(" %d = %d",n,su);}

}
