#include <stdio.h>

/*
    data - user array, where we search
    size - array range
    key - element to search
*/
int binary_search(int* data, int size, int key)
{
    int mid = 0;
    int right = size - 1;
    int left = 0;


    while (left <= right)
    {
        mid = (left + right + 1) / 2;
        if (data[mid] == key)
        {
            return mid;
        } else if (key < data[mid])
        {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

int main(void)
{
    int data[] = {1, 4, 8, 9, 10, 12, 14, 20, 31, 45, 94, 102};
    int num = 0, res = 0;

    printf("enter num for search: ");
    scanf("%d", &num);

    res = binary_search(data, sizeof(data) / sizeof(data[0]), num);
    switch (res)
    {
        case -1:
            printf("we couldn't find your num!\n");
            break;
        default:
            printf("index of your num = %d\n", res);
            break;
    }

    return 0;
}