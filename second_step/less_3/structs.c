#include <stdio.h>
#include <string.h>

struct Person
{
    char name[25];
    short age;
};

void EnterPeople(struct Person* data, int n)
{
    printf("EnterPeople() start ...\n");

    for (int i = 0; i < n; i++)
    {
        printf("[person info (%d/%d)]\n", i + 1, n);
        printf("name: ");
        fgets((data + i)->name, 25, stdin);
        data[i].name[strcspn(data[i].name, "\n")] = '\0';
        printf("age: ");
        scanf("%d", &(data + i)->age);
        while ((getchar()) != '\n');
        printf("\n");
    }
}

void WritePeople(struct Person* data, int n)
{
    printf("WritePeople() start ...\n");
    for (int i = 0; i < n; i++)
    {
        printf("Person (%d/%d)\n", i + 1, n);
        printf("name: %s | age: %d\n", (data + i)->name, (data + i)->age);
    }
}

int main(void)
{
    struct Person people[100];
    int amount = 0;

    printf("enter n: ");
    scanf("%d", &amount);
    while (getchar() != '\n');

    EnterPeople(people, amount);
    WritePeople(people, amount);

    return 0;
}