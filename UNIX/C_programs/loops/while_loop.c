#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    int num = 0;
    char name[20] = "";
    bool isRunning = true;
    char response = '\0';

    while (num <= 0) // checks the condition first
    {
        printf("Enter a number GREATER then 0: ");
        scanf("%d", &num);
    }

    do // executes statement before each condition check
    {
        printf("Enter a number LESS then 0: ");
        scanf("%d", &num);
    } while (num >= 0);

    // Clear the input buffer
    while (getchar() != '\n')
        ;

    printf("Please, enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';    // removing new line character
    name[strcspn(name, "\n")] = '\0'; // safer way to remove newline

    while (strlen(name) == 0)
    {
        printf("\nYou did not enter your name.\n");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("Your name is: %s!\n", name);

    while (isRunning)
    {
        printf("You are playing game.\n");
        printf("Would you like to continue? [Y/N]\n");
        scanf(" %c", &response);

        if (response != 'Y' && response != 'y')
        {
            isRunning = false;
        }
    }
    printf("You exit the game.\n");
    // statement above can be written by do{}while() as well.

    return 0;
};