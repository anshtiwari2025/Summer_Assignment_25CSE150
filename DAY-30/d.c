#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void input(struct Student s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void display(struct Student s[], int n)
{
    int i;

    printf("\n===== STUDENT RECORDS =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}

int main()
{
    struct Student s[10];
    int n;

    printf("===== MINI PROJECT =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    input(s, n);
    display(s, n);

    return 0;
}