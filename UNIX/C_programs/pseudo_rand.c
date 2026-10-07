#include <stdio.h>
#include <stdlib.h> // RAND_MAX
#include <time.h>   // time()

int main()
{

    srand(time(NULL));           // this srand() needs to generate random numbers, 0 will do the same as a NULL itself, 0 == NULL
    printf("%d", rand());        // ram() returns random number between 0 and RAND_MAX
    printf("\n%d", RAND_MAX);    // 2147483647 - same
    printf("\n%d", __INT_MAX__); // 2147483647 - same as well.
    // depends son my OS(Ubuntu Linux), compiler and of bunch of hardware settings.

    int min = 64;
    int max = 128;
    int randomNum = (rand() % (max - min + 1)) + min; // randomizator formula
    printf("\n%d", randomNum);

    return 0;
};