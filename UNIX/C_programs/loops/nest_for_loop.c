#include <stdio.h>

int main()
{

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("===Multiplication===\n");
    // multiplication table
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d, ", i * j);
        }
        printf("\n");
    }

    printf("\n===Symbols===\n");
    // symbol table
    printf("Enter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol); // don't forget to put whitespace before char

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%c ", symbol);
        }
        printf("\n");
    }

    return 0;
};