#include<stdio.h>
#define SIZE 10
int main() {
    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];
    
    printf(" *** Structure Array ***\n");
    printf("Enter data : ");
    for(int i=0;i<SIZE;i++) {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }
    //make sure whether data is as expected.
    /*
    printf("\nOutput : \n");
    for(i=0;i<SIZE;i++) {
        printf("%s %s %d\n",st[i].id,st[i].name,st[i].marking);
    }
    */
    int i, i_max, i_min;
    float average=0, sum=0;
    // find max marking
    i_max=0;
    i_min=0;  
    for(int i = 0; i<SIZE; i++) {
        if (st[i].marking > st[i_max].marking)
            i_max = i;
        if (st[i].marking < st[i_min].marking)
            i_min = i;
        sum += st[i].marking;
    }
    //calculate average
    average = sum/SIZE;
    printf("\n\n *** Analyzing Data ***\n");
    printf("Average marking = %.3f\n", average);
    printf("Min -- Max      = %d --> %d\n", st[i_min].marking, st[i_max].marking);

    return 0;
}