#include <stdio.h>
#include <stdlib.h>

//? calloc() - Contiguous allocation, allocates memory dynamically and sets all allocated bytes to 0
// malloc() is faster - malloc(bytes), but calloc() leads to less bugs. calloc(#, size);

int main()
{
    int number = 0;
    printf("Enter the number of players: ");
    scanf(" %d", &number);

    int *scores = (int *)calloc(number, sizeof(int));

    // segmentation fault
    if (scores == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < number; i++)
    {
        printf("%d ", scores[i]);
    }

    free(scores);  // returning "rented" space back to the OS
    scores = NULL; // avoid dangling pointers;

    return 0;
};