#include <stdio.h>

int main()
{

    //? 2D Array - an array where each element is an array(array contains arrays)
    // array[][] = {{},{},{}};

    // 1)first [] is for row (X)-axis,
    // 2)second [] is for columns(Y)-axis,
    //* basically it's like sea battle, I am picking coordinates - ship fires at it.
    /*
        int arr[ROWS][COLS] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};
    */
    int numbers[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);
    int size = rows * columns;

    char numpad[4][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'},
        {'*', '0', '#'},
    };

    printf("Amount of rows: %d\n", rows);
    printf("Amount of columns: %d\n", columns);
    printf("Total elements: %d\n", size);
    printf("Total size in bytes: %zu\n", sizeof(numbers)); // %zu used with printf to print the size of an object or type returned by the sizeof operator, check %lu for later

    printf("\n");
    printf("%d ", numbers[0][0]);   // 1
    printf("%d ", numbers[1][1]);   // 5
    printf("%d \n", numbers[2][2]); // 9
    printf("%d ", numbers[0][2]);   // 3
    printf("%d ", numbers[1][0]);   // 4
    printf("%d \n", numbers[2][1]); // 8
    printf("\n");

    // grid of numbers
    for (int i = 0; i < rows; i++) // for rows
    {
        int columns = sizeof(numbers[i]) / sizeof(numbers[i][0]); //! specific columns var with i-terator(inside/nested) loop
        for (int j = 0; j < columns; j++)                         // for columns
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    printf("\nTelephone grid: \n");
    // telephone numpad grid
    for (int i = 0; i < 4; i++) // for rows
    {
        for (int j = 0; j < 3; j++) // for columns
        {
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }

    return 0;
};