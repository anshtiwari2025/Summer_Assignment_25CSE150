#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do
    {
        printf("\n===== STRING OPERATIONS =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2:
            {
                char temp[100];
                strcpy(temp, str);
                strrev(temp);
                printf("Reversed String = %s\n", temp);
                break;
            }

            case 3:
            {
                char temp[100];
                int i;
                strcpy(temp, str);

                for(i = 0; temp[i] != '\0'; i++)
                {
                    if(temp[i] >= 'a' && temp[i] <= 'z')
                        temp[i] = temp[i] - 32;
                }

                printf("Uppercase String = %s\n", temp);
                break;
            }

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}