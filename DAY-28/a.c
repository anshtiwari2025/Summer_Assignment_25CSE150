#include <stdio.h>

struct Library
{
    int bookId;
    char title[50];
    char author[50];
};

int main()
{
    struct Library book;

    printf("===== Library Management System =====\n");

    printf("Enter Book ID: ");
    scanf("%d", &book.bookId);

    printf("Enter Book Title: ");
    scanf("%s", book.title);

    printf("Enter Author Name: ");
    scanf("%s", book.author);

    printf("\n----- Book Details -----\n");
    printf("Book ID      : %d\n", book.bookId);
    printf("Book Title   : %s\n", book.title);
    printf("Author Name  : %s\n", book.author);

    return 0;
}