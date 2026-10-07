#include <stdio.h>
#include <unistd.h> // library fir UNIX-like OS sleep() func

int main()
{

    printf("Increments: ");
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

    printf("\nDecrements: ");
    for (int i = 10; i > 0; i--)
    {
        printf("\n%d", i);
    };

    printf("\n================");

    printf("\nDecr- by 3: ");
    for (int i = 10; i > 0; i -= 3)
    {
        printf("\n%d", i);
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