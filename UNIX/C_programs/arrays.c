#include <stdio.h>

// Array - a fixed-size collection of elements of the same data type
//          (Similar to a variable, but it hold more than 1 value)
int main()
{

    // int numbers[] = {11, 22, 33, 66, 55, 44};
    int scores[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Venedykt Mitishov";

    // scores[0] = 100;
    // scores[1] = 90;
    // scores[2] = 80;
    // scores[3] = 70;
    // scores[4] = 60;

    printf("%d bytes  %d bytes\n", sizeof(scores), sizeof(scores[0])); // 20, 4

    int size = sizeof(scores) / sizeof(scores[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%c - %d; ", grades[i], scores[i]);
        // out-of-bounds memory case, when there not enough characters from grades[], loop takes its iteration to the name[], which is out of its scope.
    }

    printf("\n");

    for (int i = 0; i < 17; i++)
    {
        printf("%c", name[i]);
    }

    // printf("%d\n%d\n%d\n%d\n%d", scores[0], scores[1], scores[2], scores[3], scores[4]);
    // printf("\n%c", grades[5]);
    return 0;
};