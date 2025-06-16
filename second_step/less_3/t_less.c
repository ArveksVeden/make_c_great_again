#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
};

struct Person people[3] = {
    {"Alice", 21},
    {"Bob", 19},
    {"Crack", 28}
};

int cmp(const void* a, const void* b)
{
    return strcmp(((struct Person*)a)->name, ((struct Person*)b)->name);
}

int main(void)
{
    struct Person p1 = {"Alice", 21};

    printf("%s is %d years old\n", p1.name, p1.age);

    printf("sizeof(people) = %d | sizeof(people[0]) = %d\n", sizeof(people), sizeof(people[0]));
    printf("size = %d\n", sizeof(people) / sizeof(people[0]));

    for (int i = 0; i < sizeof(people) / sizeof(people[0]); i++)
    {
        printf("name: %.10s | age: %.3d\n", (*(people + i)).name, (*(people + i)).age);
    }

    

    return 0;
}