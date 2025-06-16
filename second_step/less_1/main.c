#include <stdio.h>

void EnterData(int data[10][10], int rows, int cols)
{
    printf("==== [inizialization of reading (data)] ====\n");
    printf("please, enter your matrix:\n");
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", (*(data + i) + j));
        }
    }
}

void WriteData(int data[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%.2d ", *(*(data + i) + j));
        }
        printf("\n");
    }
}

void RowColSum(int data[10][10], int rows, int cols)
{
    printf("==== [inizialisation of sum(cols, rows)] ====\n");
    // суммируем числа на строках.
    for (int i = 0; i < rows; i++)
    {
        int summary = 0;
        printf("string  [ %d: ", i);
        for (int j = 0; j < cols; j++)
        {
            summary += *(*(data + i) + j);
            printf("%.2d ", *(*(data + i) + j));
        }
        printf("]| summary = %d\n", summary);
    }

    for (int i = 0; i < cols; i++)
    {
        int summary = 0;
        printf("collumn [ %d: ", i);
        for (int j = 0; j < rows; j++)
        {
            summary += *(*(data + j) + i);
            printf("%.2d ", *(*(data + j) + i));
        }
        printf("]| summary = %d\n", summary);
    }
}

void TransMartix(int data[10][10], int rows, int cols)
{
    printf("==== [Matrix transporation] ====\n");
    int transpose[10][10];
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            *(*(transpose + i) + j) = *(*(data + j) + i);
            printf("%.2d ", *(*(transpose + i) + j));
        }
        printf("\n");
    }
}

void MaxElem(int data[10][10], int rows, int cols)
{
    printf("==== [Max element search] ====\n");
    int max_elem = **data;
    int x = 0, y = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (*(*(data + i) + j) > max_elem)
            {
                max_elem = *(*(data + i) + j);
                x = i;
                y = j;
            }
        }
    }

    printf("max(data) = %d | (x: %d; y: %d)\n", max_elem, x, y);
}

int main(void)
{
    int matrix[10][10];
    int rows = 0, cols = 0;
    
    printf("please, enter matrix's ranges:\n");
    printf("rows: ");
    scanf("%d", &rows);
    while (getchar() != '\n');
    printf("cols: ");
    scanf("%d", &cols);
    while (getchar() != '\n');

    EnterData(matrix, rows, cols);
    WriteData(matrix, rows, cols);
    RowColSum(matrix, rows, cols);
    TransMartix(matrix, rows, cols);
    MaxElem(matrix, rows, cols);

    return 0;
}