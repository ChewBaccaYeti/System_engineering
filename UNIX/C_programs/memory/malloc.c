#include <stdio.h>
#include <stdlib.h>

//? malloc(memory allocation) - is a func that dynamically allocates a specified number of bytes in memory
// malloc(bytes)

int main()
{
    int number = 0;
    printf("Enter the number of grades(bytes): ");
    scanf("%d", &number);

    char *grades = (char *)malloc(number * sizeof(char)); // (char *) because on line 30 I iserting character

    // segmentation fault
    if (grades == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    for (int i = 0; i < number; i++)
    {
        printf("%c ", grades[i]);
    }

    free(grades);  // returning "rented" space back to the OS
    grades = NULL; // avoid dangling pointers;

    return 0;
};