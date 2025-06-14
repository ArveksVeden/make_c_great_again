#include <stdio.h>
#include <string.h>

void enter_name()
{
    char name[20] = "";
    printf("==== [initialization protocol - greetings] ====\n");
    printf("please, enter your full name: ");
    fgets(name, 20, stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("welcome back, dear %s\n", name);
}

void count_len()
{
    char data[100] = "";
    printf("your string: ");
    fgets(data, 100, stdin);
    data[strcspn(data, "\n")] = '\0';
    printf("strlen(string) = %d\n", strlen(data));
}

void compare()
{
    char str1[50] = "", str2[50] = "";
    printf("str1: ");
    fgets(str1, 50, stdin);
    printf("str2: ");
    fgets(str2, 50, stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    short k = strcmp(str1, str2);
    if (k = 0)
    {
        printf("(%s) = (%s)\n", str1, str2);
    } else if (k > 0)
    {
        printf("(%s) > (%s)\n", str1, str2);
    } else {
        printf("(%s) < (%s)\n", str1, str2);
    }
}

void concat()
{
    char str1[50] = "", str2[50] = "", str3[100] = "";
    printf("str1: ");
    fgets(str1, 50, stdin);
    printf("str2: ");
    fgets(str2, 50, stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str3, str1);
    strcat(str3, str2);
    printf("\"%s\" + \"%s\" = \"%s\"\n", str1, str2, str3);
}

int main(void)
{
    //enter_name();
    //count_len();
    compare();
    //concat();

    return 0;
}