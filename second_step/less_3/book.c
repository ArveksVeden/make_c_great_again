#include <stdio.h>

struct Book
{
    char title[100];
    char author[50];
    int year;
};

// тестируем работу с '.' в структурах - через сам объект
void printBook(struct Book b)
{
    printf("\nprintBook start ...\n");
    printf("title: %s | author: %s | year: %d\n", b.title, b.author, b.year);
}

// тестируем работу с "->" в структурах - через ссылку на сам объект
void printBookPtr(struct Book* b)
{
    printf("\nprintBookPtr start ...\n");
    printf("title: %s | author: %s | year: %d\n", b->title, b->author, b->year);  
}

int main(void)
{
    struct Book library[5] = {{"book1", "author1", 1}, {"book2", "author2", 2}, {"book3", "author3", 3}, {"book4", "author4", 4}, {"book5", "author5", 5}};

    for (int i = 0; i < sizeof(library) / sizeof(library[0]); i++)
    {
        printf("book #%d:\n", i + 1);
        printf("title: %s | author: %s | year: %d\n", (library + i)->title, (*(library + i)).author, (library + i)->year);
    }

    struct Book bookie = {"big book", "arveksdeveden", 1703};
    printBook(bookie);
    printBookPtr(&bookie);

    return 0;
}