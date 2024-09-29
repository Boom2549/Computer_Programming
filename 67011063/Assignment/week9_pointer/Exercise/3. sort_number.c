#include <stdio.h>

void sort(int *arr)
{
    int i, j, temp;
    // ใช้ Bubble Sort เพื่อเรียงจากมากไปน้อย
    for (i = 0; i < 4; i++)  // เราต้องวนซ้ำแค่ 4 ครั้ง เนื่องจากมี 5 องค์ประกอบ
    {
        for (j = 0; j < 4 - i; j++) // แก้ไขให้เป็น 0 ถึง 4-i เพื่อให้ไม่เกินขอบเขต
        {
            if (*(arr + j) < *(arr + j + 1))  // ใช้ pointer arithmetic
            {
                // สลับค่า
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int scores[5], i;
    printf("Enter 5 scores: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &scores[i]);
    
    sort(scores);
    
    printf("Sorted: ");
    for (i = 0; i < 5; i++)
        printf("%d ", scores[i]);
    
    return 0;
}