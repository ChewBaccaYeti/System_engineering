#include <stdio.h>
#include <stdlib.h>

#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_BLUE "\x1b[34m"
// #define ANSI_COLOR_BLUE_BG "\x1b[44m"
// #define ANSI_COLOR_WHITE_BG "\x1b[47m"
#define ANSI_COLOR_RESET "\x1b[0m"

// algo
void fuzzBuzz(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // if (i % 3 == 0 && i % 5 == 0)
        // {
        //     printf(ANSI_COLOR_GREEN "Current number: %d Fuzz Buzz\n", i, ANSI_COLOR_RESET);
        // }
        // else if (i % 3 == 0)
        // {
        //     printf(ANSI_COLOR_RED "Current number: %d Fuzz\n", i, ANSI_COLOR_RESET);
        // }
        // else if (i % 5 == 0)
        // {
        //     printf(ANSI_COLOR_BLUE "Current number: %d Buzz\n", i, ANSI_COLOR_RESET);
        // }
        // else
        // {
        //     printf(ANSI_COLOR_CYAN "Current number: %d\n", i, ANSI_COLOR_RESET);
        // }

        printf("Current number: %d", i);
        if (i % 3 == 0)
        {
            printf(" fuzz");
        }
        if (i % 5 == 0)
        {
            printf(" buzz");
        }
        printf("\n");
    };
};

int main()
{
    int n = 64;
    fuzzBuzz(n);
    return 0;
};