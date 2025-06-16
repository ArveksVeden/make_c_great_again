#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b)
{
    return *(int *)a - *(int *)b;
}

int main(void)
{
    int data[] = {9, 3, 5, 1, 6};
    int size = sizeof(data) / sizeof(data[0]);

    qsort(data, size, sizeof(int), cmp);

    for (int i = 0; i < size; i++)
    {
        printf("%.2d ", *(data + i));
    }
    printf("\n");

    return 0;
}