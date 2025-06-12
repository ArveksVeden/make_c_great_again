#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int x = 5;

    // условная конструкция if / else if / else
    printf("==== [работа условной конструкции if/else] ====\n");
    if (x > 0) {
        printf("x - положительное.\n");
    } else if (x < 0) {
        printf("x - отрицательное.\n");
    } else {
        printf("x равно нулю.\n");
    }

    // switch - альтернатива для if/else [работает только с целочисленными значениями]
    printf("\n==== [работа условной конструкции switch/case] ====\n");
    int day = 3;
    switch (day)
    {
        case 1:
            printf("Пн\n");
            printf("bad\n");
            break;
        case 2:
            printf("Вт\n");
            printf("not bad\n");
            break;
        case 3:
            printf("Ср\n");
            printf("well-well-well\n");
            break;
        default:
            printf("none day\n");
    }

    // цикл for
    printf("\n==== [работа цикла for] ====");
    for (int i = 0; i < 10; i++)
    {
        printf("i = %d\n", i);
    }

    // цикл while
    printf("\n==== [работа цикла while] ====");
    int i = 0;
    while (i < 5)
    {
        printf("i = %d\n", i);
        i++;
    }

    // цикл do ... while
    printf("\n==== [работа цикла do ... while] ====");
    int i = 0;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);

    return 0;
}