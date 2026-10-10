#include <stdio.h>
#include <string.h>

int main()
{
    char fruits[][10] = {
        "Apple",
        "Banana",
        "Coconut",
    };
    int size_fruits = sizeof(fruits) / sizeof(fruits[0]);

    for (int i = 0; i < size_fruits; i++)
    {
        printf("%s \n", fruits[i]);
    }

    printf("\n");

    // characters replacement
    fruits[0][0] = 'Q';
    fruits[1][2] = 'R';
    fruits[2][4] = 'S';
    fruits[2][6] = 'S';

    for (int i = 0; i < size_fruits; i++)
    {
        printf("%s \n", fruits[i]);
    }

    //* EXERCISE
    char names[3][25] = {0}; // [3] - 3 names(rows) and each name have [25] size characters (in bytes)
    int rows_names = sizeof(fruits) / sizeof(fruits[0]);
    // int cols_names = sizeof(fruits[0]) / sizeof(fruits[0][0]);
    // int size_names = rows_names * cols_names;

    for (int i = 0; i < rows_names; i++)
    {
        printf("\nEnter name: ");
        fgets(names[i], sizeof(names[i]), stdin); // fgets() ignores any whitespace in it
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for (int i = 0; i < rows_names; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
};