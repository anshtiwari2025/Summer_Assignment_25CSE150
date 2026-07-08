#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book book[5];
    int i, n;

    printf("===== MINI LIBRARY SYSTEM =====\n");

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].id);

        printf("Book Title: ");
        scanf("%s", book[i].title);

        printf("Author: ");
        scanf("%s", book[i].author);
    }

    printf("\n------ Library Records ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook ID : %d", book[i].id);
        printf("\nTitle   : %s", book[i].title);
        printf("\nAuthor  : %s\n", book[i].author);
    }

    return 0;
}