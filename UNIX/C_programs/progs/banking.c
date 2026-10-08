#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main()
{

    int choice = 0; // 1)check_balance, 2)deposit, 3)withdraw, 4)exit
    float balance = 0.0f;

    printf("*** WELCOME TO THE BANK ***\n");

    do
    {
        printf("\nSELECT AN OPTION:\n1) CHECK BALANCE\n2) DEPOSIT VALUES\n3) WITHDRAW VALUES\n4) EXIT\nENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            printf("\n*** THANK YOU FOR USING OUR SERVICES ***\n");
            break;
        default:
            printf("\nINVALID CHOICE - SELECT PROVIDED OPTIONS");
            break;
        }
    } while (choice != 4);

    return 0;
};

void checkBalance(float balance)
{
    printf("\nYour current balance is: €%.2f\n", balance);
};

float deposit()
{
    float amount = 0.0f;

    printf("\nEnter amount to deposit: €");
    scanf("%f", &amount);

    if (amount < 0)
    {
        printf("Invalid amount.\n");
        return 0.0f;
    }
    else
    {
        printf("Successfully deposited €%.2f\n", amount);
        return amount;
    }
};

float withdraw(float balance)
{
    float amount = 0.0f;

    printf("\nEnter amount to withdraw: €");
    scanf("%f", &amount);

    if (amount < 0)
    {
        printf("Invalid amount.\n");
        return 0.0f;
    }
    else if (amount > balance)
    {
        printf("Insufficient funds! Your balance is: €%.2f.\n", balance);
        return 0.0f;
    }
    else
    {
        printf("Successfully withdraw €%.2f\n", amount);

        float currBal = balance - amount;
        printf("Your current balance is: €%.2f\n", currBal);

        return amount;
    }

    return 0.0f;
};