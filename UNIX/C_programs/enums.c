#include <stdio.h>

enum Day // from 0 to 6
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

typedef enum // MANUALLY DEFINED NUMBERS
{
    WHITE = 1,
    GREEN = 2,
    RED = 3,
    BLUE = 4,
    BLACK = 5,
    YELLOW = 6,
    PINK = 7
} PowerRanger;

typedef enum
{
    SUCCESS, // 0
    FAILURE, // 1
    PENDING  // 2
} Status;

void connectStatus(Status status); // function prototype

void connectStatus(Status status)
{

    switch (status)
    {
    case SUCCESS:
        printf("\nCONNECTED*");
        break;
    case FAILURE:
        printf("\nNO_CONNECTION*");
        break;
    case PENDING:
        printf("\nCONNECTing...*");
        break;
    }
};

int main()
{
    /*  //? enum = is a user-defined data type that consists of set of named integer constants.
        Benefit: replaces numbers with readable names.
    */

    enum Day today = FRIDAY; // 5
    printf("%d", today);

    if (today == SATURDAY && today == SUNDAY)
    {
        printf("\nIt's a weekend!");
    }
    else
    {
        printf("\nIt's a weekday.");
    }

    PowerRanger ranger = BLUE; // 4
    printf("\n%d", ranger);

    Status status = SUCCESS;
    connectStatus(status);

    return 0;
};