#include <stdio.h>

int main()
{
    char name[50];
    int accountNo;
    float balance, amount;
    int choice;

    printf("===== Bank Account System =====\n");

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    do
    {
        printf("\n1. Deposit");
        printf("\n2. Withdraw");
        printf("\n3. Check Balance");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount Deposited Successfully.\n");
                break;

            case 2:
                printf("Enter Withdrawal Amount: ");
                scanf("%f", &amount);

                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Withdrawal Successful.\n");
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}