#include <stdio.h>

// alternative to using if-else statements when there a lot of conditions
// and its efficient w/ fixed int value
int main()
{
    int dayOfTheWeek = 0;
    printf("Please, enter the day of the week: ");
    scanf("%d", &dayOfTheWeek);

    switch (dayOfTheWeek)
    {
    case 1:
        printf("It is Monday.\n");
        break;
    case 2:
        printf("It is Tuesday.\n");
        break;
    case 3:
        printf("It is Wednesday.\n");
        break;
    case 4:
        printf("It is Thursday.\n");
        break;
    case 5:
        printf("It is Friday.\n");
        break;
    case 6:
        printf("It is Saturday.\n");
        break;
    case 7:
        printf("It is Sunday.\n");
        break;
    default:
        printf("Please enter the number in the range between 1-7.\n");
    }

    return 0;
};