#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 0;
    printf("==== enter data range: ====\n");
    printf("n: ");
    scanf("%d", &size);
    while ((getchar()) != '\n');

    int* data = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("data[%d]: ", i);
        scanf("%d", (data + i));
        while (getchar() != '\n');
    }

    printf("==== chech your data: ====\n");
    for (int i = 0; i < size; i++)
    {
        printf("data[%d] = %d\n", i, *(data + i));
    }

    return 0;
}