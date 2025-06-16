#include <stdio.h>


/*
    Двумерные массивы (матрицы) в C
*/
int main(void)
{
    int matrix[50][50];
    int n = 0, k = 0;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", (*(matrix + i) + j));
        }
        printf("\n");
        while (getchar() != '\n');
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%.2d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }


    return 0;
}