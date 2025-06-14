#include <stdio.h>

void read_data(int* data, int n)
{
    printf("==== initializing reading the (data) ... ====\n");
    printf("[now, enter your data (arr)]\n");
    for (int i = 0; i < n; i++)
    {
        printf("data[%d]: ", i);
        scanf("%d", (data + i));
        while ((getchar()) != '\n');
    }

    printf("[well, now - check your own data]\n");
    for (int i = 0; i < n; i++)
    {
        printf("data[%d] = %d\n", i, *(data + i));
    }
}

void min_max(int* data, int n)
{
    printf("==== initializing the search of max and min (data) ... ====\n");
    int min = data[0], max = data[0];
    float avarage = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(data + i) > max)
        {
            max = *(data + i);
        }
        if (*(data + i) < min)
        {
            min = *(data + i);
        }

        avarage += *(data + i);
    }
    avarage /= n;

    printf("| max(data)     | %.4d |\n", max);
    printf("| min(data)     | %.4d |\n", min);
    printf("| avarage(data) | %.2f |\n", avarage);
}

void reverse(int* data, int n)
{
    printf("==== initializing reverse of the (data) ... ====\n");
    for (int i = (n - 1); i >= 0; i--)
    {
        printf("data[%d] = %d\n", i, *(data + i));
    }
}

int main(void)
{
    int data[100] = {0};
    int n = 0;
    printf("please, enter array range (n): ");
    scanf("%d", &n);
    while ((getchar()) != '\n');

    read_data(data, n);
    min_max(data, n);
    reverse(data, n);

    return 0;
}