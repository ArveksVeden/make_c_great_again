#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[10] = "";

    printf("enter your string: ");
    fgets(name, 10, stdin);
    //name[strcspn(name, "\n")] = '\0';
    name[strlen(name) - 1] = '\0';
    
    for (int i = 0; i < sizeof(name); i++)
    {
        printf("name[%d] = %c\n", i, *(name + i));
    }

    printf("strlen(name) = %d\n", strlen(name));

    return 0;
}