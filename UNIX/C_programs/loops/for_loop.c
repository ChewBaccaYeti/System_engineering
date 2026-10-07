#include <stdio.h>
#include <unistd.h> // library fir UNIX-like OS sleep() func

int main()
{
    printf("\n");
    printf("=======+Increments+=======\n");
    printf("Incr++: ");
    for (int i; i <= 10; i++)
    {
        printf("%d, ", i);
    };

    printf("\n================");

    printf("\nIncr+ by 2: ");
    for (int i; i <= 10; i += 2)
    {
        printf("%d, ", i);
    };

    printf("\n================");

    printf("\nIncr+ by 3 w/ break: ");
    for (int i; i < 15; i += 3)
    {
        if (i == 9) // 0, 3, 6
        {
            break; // STOP the loop
        }
        printf("%d, ", i);
    };

    printf("\n================");

    printf("\nIncr+ by 4 w/ continue(skipping): ");
    for (int i; i < 16; i += 4)
    {
        if (i == 8) // 0, 4, 12, (8 has been skipped)
        {
            continue; // SKIP the iteration on this moment in loop
        }
        printf("%d, ", i);
    };

    printf("\n");
    printf("\n=======-Decrements-=======");

    printf("\nDecr--: ");
    for (int i = 10; i > 0; i--)
    {
        printf("%d, ", i);
    };

    printf("\n================");

    printf("\nDecr- by 3: ");
    for (int i = 10; i > 0; i -= 3)
    {
        printf("%d, ", i);
    };

    printf("\n================");

    printf("\nDecr- by 4 w/ break: ");
    for (int i = 16; i > 0; i -= 4)
    {
        if (i == 4) // 16, 12, 8
        {
            break; // STOP the loop
        }
        printf("%d, ", i);
    };

    printf("\n================");

    printf("\nDecr- by 5 w/ continue(skipping): ");
    for (int i = 20; i > 0; i -= 5)
    {
        if (i == 15) // 20, 10, 5, (15 has been skipped)
        {
            continue; // SKIP the iteration on this moment in loop
        }
        printf("%d, ", i);
    };

    printf("\n================\n");

    // new year celebration
    for (int i = 10; i >= 0; i--)
    {
        sleep(1);
        printf("%d\n", i);
    }
    printf("HAPPY NEW YEAR!");

    return 0;
};