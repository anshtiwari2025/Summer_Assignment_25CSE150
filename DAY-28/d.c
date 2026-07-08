#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact c;

    printf("===== Contact Management System =====\n");

    printf("Enter Name: ");
    scanf("%s", c.name);

    printf("Enter Phone Number: ");
    scanf("%s", c.phone);

    printf("Enter Email ID: ");
    scanf("%s", c.email);

    printf("\n----- Contact Details -----\n");
    printf("Name         : %s\n", c.name);
    printf("Phone Number : %s\n", c.phone);
    printf("Email ID     : %s\n", c.email);

    return 0;
}