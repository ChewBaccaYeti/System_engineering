#include <stdio.h>
#include <stdlib.h> // RAND_MAX
#include <time.h>   // tiem()

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main()
{

    srand(time(NULL));

    printf("***RCK/PPR/SCSSRS***\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch (userChoice)
    {
    case 1:
        printf("You choose ROCK!\n");
        break;
    case 2:
        printf("You choose PAPER!\n");
        break;
    case 3:
        printf("You choose SCISSORS!\n");
        break;
    };

    switch (computerChoice)
    {
    case 1:
        printf("Computer choose ROCK!\n");
        break;
    case 2:
        printf("Computer choose PAPER!\n");
        break;
    case 3:
        printf("Computer choose SCISSORS!\n");
        break;
    };

    checkWinner(userChoice, computerChoice);

    return 0;
};

int getComputerChoice()
{
    return (rand() % 3) + 1;
};

int getUserChoice()
{
    int choice = 0;
    do
    {
        printf("Choose you option.\n1) ROCK\n2) PAPER\n3) SCISSORS\nEnter your choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);
    return choice;
};

void checkWinner(int userChoice, int computerChoice)
{

    if (userChoice == computerChoice)
    {
        printf("It's a TIE!");
    }
    else if ((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2))
    {
        printf("You WIN!");
    }
    else
    {
        printf("You LOSE!");
    }
};