#include <stdio.h>
#include <windows.h>

void parity()
{
    int num = 0;

    printf("enter your num: ");
    scanf("%d", &num);
    
    if (num % 2 == 0)
    {
        printf("%d is even [четное]\n", num);
    } else {
        printf("%d is odd [нечетное]\n", num);
    }
}

void calc()
{
    int num_1 = 0, num_2 = 0, result = 0;
    char operator = ' ';
    printf("enter your number:\n");
    printf("first number: ");
    scanf("%d", &num_1);
    printf("second number: ");
    scanf("%d", &num_2);
    printf("enter operator: ");
    while (getchar() != '\n'); // очитка буфера ввода
    operator = getchar();

    switch (operator)
    {
        case '+':
            result = num_1 + num_2;
            break;
        case '-':
            result = num_1 - num_2;
            break;
        case '*':
            result = num_1 * num_2;
            break;
        case '/':
            if (num_2 == 0)
            {
                printf("invalid: zero division.\n");
                return;
            } else {
                printf("%d / %d = %.2f\n", num_1, num_2, (float)num_1 / num_2);
                return;

            }
        default:
            printf("invalid operator: %c\n", operator);
            return;
    }

    printf("\n%d %c %d = %d\n", num_1, operator, num_2, result);
}

void summary_n()
{
    int n = 0, result = 0;

    printf("enter N param: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    printf("\nsum(1; N) = %d\n", result);
}

void mult_table()
{
    printf("==== [вывод таблицы умножения 10x10] ====\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%4d", (i * j));
        }
        printf("\n");
    }
}

int main(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    //parity();
    calc();
    //summary_n();
    //mult_table();

    return 0;
}